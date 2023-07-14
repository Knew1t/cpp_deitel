#include "complex.h"

#include <iostream>
using namespace std;

Complex::Complex(double r, double i) {
    cout << "Constructor started working" << endl;
    setCompNum(r, i);
}

void Complex::setCompNum(double r, double i) {
    setRealPart(r);
    setImaginaryPart(i);
}

void Complex::setRealPart(double r) { real_part = r; }
void Complex::setImaginaryPart(double i) { imaginary_part = i; }

double Complex::getRealPart() const { return real_part; }
double Complex::getImaginaryPart() const { return imaginary_part; }

void Complex::PrintCompNum() const {
    cout << getRealPart() << (getImaginaryPart() < 0 ? "" : "+")
         << getImaginaryPart() << "i" << endl;
}

void Complex::AddComp(Complex x, Complex y) {
  setRealPart(x.getRealPart()+y.getRealPart());
  setImaginaryPart(x.getImaginaryPart()+y.getImaginaryPart());
}
void Complex::SubComp(Complex x, Complex y){
  setRealPart(x.getRealPart()- y.getRealPart());
  setImaginaryPart(x.getImaginaryPart()-y.getImaginaryPart());
}
