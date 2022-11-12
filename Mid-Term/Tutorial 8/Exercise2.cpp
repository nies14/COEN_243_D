#include <iostream> 
#include <array> 
using namespace std;

int main() {
   const size_t SIZE{5}; // size of array
   array<int, SIZE> a{};
   size_t subscript{0};
   bool duplicate{false};

   cout << "Enter 5 integers between 10 and 100:\n";

   // get 20 nonduplicate integers in the range between 10 and 100
   unsigned int i{0};
   
   while (i < SIZE) {
      duplicate = false;
      int value{0}; // number entered by user
      cin >> value;

      // validate input and test if there is a duplicate
      if (value >= 10 && value <= 100) {
         for (size_t j{0}; j < subscript; ++j) {
            if (value == a[j]) {
               duplicate = true;
               break;
            } 
         } 

         // if number is not a duplicate, enter it in array
         if (!duplicate) {
            a[subscript] = value;
            subscript++;
         }
         else {
            cout << "Duplicate number.\n";
         }

         ++i;
      } 
      else {
         cout << "Invalid number.\n";
      }
   }

   cout << "\nThe nonduplicate values are:\n";

   // display array of nonduplicates
   for (size_t index{0}; index < subscript; ++index) {
      cout << a[index] << ' ';
   }

   cout << endl;
}