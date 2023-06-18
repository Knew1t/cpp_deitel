#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational {
  public:
    Rational(int = 0, int = 1);
    ~Rational();
    Rational AddRat(Rational, Rational);
    Rational SubRat(Rational, Rational);
    Rational MultRat(Rational, Rational);
    Rational DivRat(Rational, Rational);
    void PrintRational() const;
    void PrintRatFloating() const;

    int getDenominator() const;
    int getNumerator() const;
    void setDenominator(int) ;
    void setNumerator(int) ;

  private:
    int numerator;
    int denominator;

    void ShortenRational();
};

#endif // !RATIONAL_H
