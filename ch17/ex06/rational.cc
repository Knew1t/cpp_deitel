#include "rational.h"
#include <algorithm>
#include <numeric>
#include <stdexcept>

using namespace std;

Rational Rational::AddRat(Rational a, Rational b) {
    Rational result;
    if (a.GetDenominator() == b.GetDenominator()) {
        result.SetNumerator(a.GetNumerator() + b.GetNumerator());
        result.SetDenominator(a.GetDenominator());
    } else {
        int lcm_variable = lcm(a.GetDenominator(), b.GetDenominator());
        result.SetNumerator(
            a.GetNumerator() * lcm_variable / a.GetDenominator() +
            b.GetNumerator() * lcm_variable / b.GetDenominator());
        result.SetDenominator(lcm_variable);
    }
    result.ShortenRational();
    return result;
}

Rational Rational::SubRat(Rational a, Rational b) {
    Rational result;
    if (a.GetDenominator() == b.GetDenominator()) {
        result.SetNumerator(a.GetNumerator() - b.GetNumerator());
        result.SetDenominator(a.GetDenominator());
    } else {
        int lcm_variable = lcm(a.GetDenominator(), b.GetDenominator());
        result.SetNumerator(
            a.GetNumerator() * lcm_variable / a.GetDenominator() - 
            b.GetNumerator() * lcm_variable / b.GetDenominator());
        result.SetDenominator(lcm_variable);
    }
    result.ShortenRational();
    return result;
}

  Rational Rational::MultRat(Rational a, Rational b){
    Rational result;
    result.SetNumerator(a.GetNumerator()*b.GetNumerator());
    result.SetDenominator(a.GetDenominator()* b.GetDenominator());
    result.ShortenRational();
    return result;
  }
  Rational Rational::DivRat(Rational a, Rational b){
    Rational result;
    result.SetNumerator(a.GetNumerator()*b.GetDenominator());
    result.SetDenominator(a.GetDenominator()* b.GetNumerator());
    result.ShortenRational();
    return result;
  }

Rational::Rational(int n, int d) : numerator(n), denominator(d) {
    this->ShortenRational();
    if (d == 0)
        throw invalid_argument("denominator cannot be equal to 0 !");
}

Rational::~Rational() {}


void Rational::PrintRational() const {
    if (GetNumerator() == 0)
        cout << "0" << endl;
    else
        cout << GetNumerator() << "/" << GetDenominator() << endl;
}
void Rational::PrintRatFloating() const {
    if (GetNumerator() == 0)
        cout << "0" << endl;
    else 
      cout <<float(GetNumerator())/GetDenominator() << endl;
}

int Rational::GetDenominator() const { return denominator; }
int Rational::GetNumerator() const { return numerator; }
void Rational::SetDenominator(int d) { denominator = d; }
void Rational::SetNumerator(int n) { numerator = n; }

void Rational::ShortenRational() {
    if (denominator != 1 && (__gcd(numerator, denominator) != 1)) {
        while (__gcd(numerator, denominator) != 1) {
            int tmp_n = numerator / __gcd(numerator, denominator);
            denominator /= __gcd(numerator, denominator);
            SetNumerator(tmp_n);
        }
    }
}
