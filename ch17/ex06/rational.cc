#include "rational.h"
#include <algorithm>
#include <stdexcept>

using namespace std;
Rational Rational::AddRat(Rational a, Rational b){
  // if (__gcd() != 1)
}
Rational::Rational(int n, int d) : numerator(n), denominator(d) {
    this->ShortenRational();
    if (d == 0)
        throw invalid_argument("denominator cannot be equal to 0 !");
}

Rational::~Rational() {}

void Rational::PrintRational() const {
    if (getNumerator() == 0)
        cout << "0" << endl;
    else
        cout << getNumerator() << "/" << getDenominator() << endl;
}

int Rational::getDenominator() const { return denominator; }
int Rational::getNumerator() const { return numerator; }
void Rational::setDenominator(int d) { denominator = d; }
void Rational::setNumerator(int n) { numerator = n; }

void Rational::ShortenRational() {
    if (denominator != 1 && (__gcd(numerator, denominator) != 1)) {
        while (__gcd(numerator, denominator) != 1) {
            int tmp_n = numerator / __gcd(numerator, denominator);
            denominator /= __gcd(numerator, denominator);
            setNumerator(tmp_n);
        }
    }
}
