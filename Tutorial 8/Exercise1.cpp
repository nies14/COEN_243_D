#include <iostream> 
#include <iomanip> 
#include <array>
using namespace std;

void wages(array<int, 11>&); // function prototype
void display(const array<int, 11>&); // function prototype

int main() {
   array<int, 11> salaries{}; // array to hold salaries

   cout << fixed << showpoint;
   wages(salaries); // calculate wages
   display(salaries); // display ranges of wages
} 

// function that asks user to input gross sales
// and calculates employee salary based on input
void wages(array<int, 11> &money) {
   double sales; // holds employee gross sales
   double i{0.09}; // 9%, used for calculating salary

   // prompt user for gross sales and store it in sales
   cout << "Enter employee gross sales (-1 to end): ";
   cin >> sales;

   // calculate salary based on sales
   // and prompt user for another employee sales amount
   while (sales != -1) {
      double salary{200.0 + sales * i};
      cout << setprecision(2) << "Employee Commission is $" 
         << salary << '\n';

      int x{static_cast<int>(salary) / 100};
      cout << "x: "<< x << endl;
      ++money[(x < 10 ? x : 10)];

      cout << "\nEnter employee gross sales (-1 to end): ";
      cin >> sales;
   } 
} 

// function that displays table of salary ranges
// and number of employees in each range
void display(const array< int, 11>& dollars) {
   // display table of ranges and employees in each range
   cout << "Employees in the range:";

   for (size_t i{2}; i < 10; ++i) {
      cout << "\n$" << i << "00-$" << i << "99 : " << dollars[i];
   }

   cout << "\nOver $1000: " << dollars[10] << endl;
}