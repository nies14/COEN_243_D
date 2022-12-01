#include <iostream>
#include "Rational.h" // include definition of class Rational
using namespace std;

int main() {
   Rational c{2, 6};
   Rational d{7, 8};

   Rational x = c.add(d); // adds object c and d; sets the value to x
   cout << c.toRationalString() << " + " << d.toRationalString() << " = "
      << x.toRationalString() << '\n';
   cout << x.toRationalString() << " = " << x.toDouble() << "\n\n";

   /*x = c.subtract(d); // subtracts object c and d
   cout << c.toRationalString() << " - " << d.toRationalString() << " = "
      << x.toRationalString() << '\n';
   cout << x.toRationalString() << " = " << x.toDouble() << "\n\n";

   x = c.multiply(d); // multiplies object c and d
   cout << c.toRationalString() << " + " << d.toRationalString() << " = "
      << x.toRationalString() << '\n';
   cout << x.toRationalString() << " = " << x.toDouble() << "\n\n";

   x = c.divide(d); // divides object c and d
   cout << c.toRationalString() << " + " << d.toRationalString() << " = "
      << x.toRationalString() << '\n';
   cout << x.toRationalString() << " = " << x.toDouble() << "\n";*/
}
