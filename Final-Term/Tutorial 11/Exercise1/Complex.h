#include <string>

class Complex {
public:
   Complex(double = 0.0, double = 0.0); // default constructor
   Complex add(const Complex&);			  // function add
   Complex subtract(const Complex&); // function subtract
   std::string toString();  // return string representation
   void setComplexNumber(double, double); // set complex number
private:
   double realPart;
   double imaginaryPart;
};
