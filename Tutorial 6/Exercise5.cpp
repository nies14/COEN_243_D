#include <iostream>
#include <iomanip>
using namespace std;

int celsius(int); // function prototype
int fahrenheit(int); // function prototype

int main() 
{
   // display table of Fahrenheit equivalents of Celsius temperatures
   cout << "Fahrenheit equivalents of Celsius temperatures:" << endl;

   // create 4 sets of table headers
   for (unsigned int t{0}; t < 4; ++t) 
   {
      cout << setw(7) << "Celsius" << setw(12) << "Fahrenheit ";
   }

   cout << endl;

   // display temperatures in blocks of 25
   for (unsigned int i{0}; i < 25; ++i) 
   {
      for (unsigned int j{0}; j <= 75; j += 25) 
      {
         cout << setw(7) << i + j << setw(11) << fahrenheit(i + j) << ' ';
      }

      cout << endl;
   } 

   // display equivalent for 100
   cout << setw(64) << 100 << setw(11) << fahrenheit(100) << endl;

   // display table of Celsius equivalents of Fahrenheit temperatures
   cout << "\nCelsius equivalents of Fahrenheit temperatures:" << endl;

   // create 4 sets of table headers
   for (unsigned int t{0}; t < 4; ++t) {
      cout << setw(10) << "Fahrenheit" << setw(9) << "Celsius ";
   }

   cout << endl;

   // display temperatures in blocks of 45
   for (unsigned int i{32}; i < 77; ++i) 
   {
      for (unsigned int j{0}; j <= 135; j += 45) 
      {
         cout << setw(10) << i + j << setw(8) << celsius(i + j) << ' ';
      }

      cout << endl;
   } 

   // display equivalent for 212
   cout << setw(67) << 212 << setw(8) << celsius(212) << endl;
} 

// celsius returns Celsius equivalent of fTemp, given in Fahrenheit
int celsius(int fTemp) 
{
   return (int)(5.0 / 9.0 * (fTemp - 32));
} 

// fahrenheit returns Fahrenheit equivalent of cTemp, given in Celsius
int fahrenheit(int cTemp) 
{
   return (int)(9.0 / 5.0 * cTemp + 32);
} 