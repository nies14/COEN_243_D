#include <iostream>
#include <cmath>
using namespace std;

unsigned int seconds(unsigned int, unsigned int, unsigned int); // function prototype

int main() 
{
   unsigned int hours{0}; // current time's hours
   unsigned int minutes{0}; // current time's minutes
   unsigned int secs{0}; // current time's seconds

   cout << "Enter the first time as three integers: ";
   cin >> hours >> minutes >> secs;
   double first = seconds(hours, minutes, secs); // calculate first time

   cout << "Enter the second time as three integers: ";
   cin >> hours >> minutes >> secs;
   double second = seconds(hours, minutes, secs); // calculate second time
   double difference = fabs(first - second); // calculate difference

   // display difference
   cout << "The difference between the times is "<< difference << " seconds" << endl;
} 

// seconds returns number of seconds since clock "struck 12"
// given input time as hours h, minutes m, seconds s
unsigned int seconds(unsigned int h, unsigned int m, unsigned int s) 
{
   return 3600 * (h >= 12 ? h - 12 : h) + 60 * m + s;
} 
