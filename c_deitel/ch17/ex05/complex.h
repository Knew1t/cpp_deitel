// Complex Class) Create a class called Complex for performing arithmetic with
// complex numbers.
// Use double variables to represent the private data of the class. Provide a
// constructor that enables an object of this class to be initialized when it’s
// declared. The constructor should contain default values in case no
// initializers are provided. Provide public member functions that perform the
// fol- lowing tasks:
//                a) Adding two Complex numbers: The real parts are added together and the
                  // imaginary parts are added together.
//                b) Subtracting two Complex numbers: The real part of the right operand is
                  // subtracted from the real part of the left operand, and the imaginary part of
                  // the right operand is sub- tracted from the imaginary part of the left
                  // operand. 
//                c) Printing Complex numbers in the form (a, b), where a is the real
                  // part and b is the imag- inary part.
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
  public:
    explicit Complex(double = 0, double = 0);
    ~Complex() = default;
    void AddComp(Complex, Complex);
    void SubComp(Complex, Complex);
    void PrintComp(double, double) const;
    void setCompNum(double, double);
    void setRealPart(double);
    void setImaginaryPart(double);
    double getRealPart() const;
    double getImaginaryPart() const;
    void PrintCompNum() const;

  private:
    double real_part;
    double imaginary_part;
};

#endif // !COMPLEX_H
