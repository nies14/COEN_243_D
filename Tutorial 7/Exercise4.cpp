// Exercise 6.48 Solution: ex06_48.cpp
// Use inline function to calculate circle area.
#include <iostream>
using namespace std;

const double pi{3.14159}; // global variable

// circleArea is inline function that returns area of circle
inline double circleArea(double r) 
{ 
   return pi * r * r; // return area
} 

int main() 
{
   double radius{0}; // user entered radius

   // prompt for radius
   cout << "Enter the radius of the circle: ";
   cin >> radius;

   // calculate and display area of circle
   cout << "The area of the circle is " << circleArea(radius) << endl;
} 