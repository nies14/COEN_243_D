#ifndef RATIONAL_H
#define RATIONAL_H

#include <string>

class Rational {
public:
   Rational(int = 0, int = 1); // default constructor
   Rational add(const Rational&) const;
   Rational subtract(const Rational&) const;
   Rational multiply(const Rational&) const;
   Rational divide(const Rational&) const;
   std::string toRationalString() const; // return as string format
   double toDouble() const; // return rational as double
private:
   int numerator; // integer numerator
   int denominator; // integer denominator
   void reduce(); // utility function
};

#endif
