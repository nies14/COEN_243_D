
#include <iostream>
#include <sstream> // for ostringstream class
#include "Complex.h"
using namespace std;


Complex::Complex(double real, double imaginary)
   //: realPart(real), imaginaryPart(imaginary)
   {
    realPart = real;
    imaginaryPart = imaginary;
   }

Complex Complex::add(const Complex &right)
{
    //Complex ob(realPart + right.realPart, imaginaryPart + right.imaginaryPart);
    //return ob;
  return Complex(
      realPart + right.realPart, imaginaryPart + right.imaginaryPart);
}

Complex Complex::subtract(const Complex &right) {
   return Complex(realPart - right.realPart, imaginaryPart - right.imaginaryPart);
}

string Complex::toString() {
   ostringstream output;
   output << "(" << realPart << ", " << imaginaryPart << ")";
   return output.str();
}

void Complex::setComplexNumber(double rp, double ip) {
   realPart = rp;
   imaginaryPart = ip;
}


