#include <iostream>

using namespace std;

int main()
{
   // condition1: !(x < 5), condition2: !(y >= 7)
   int x{6}; // make condition1 true first time through loop
   int y{0}; // variable for condition2

   cout << boolalpha << endl;

   // loop twice for condition1 true, then false
   do {
      x--; // make condition1 false second time through loop
      y = 5; // make condition2 true first time through loop

      // loop twice for condition2 true, then false
      do {
         ++y; // make condition2 false second time through loop

         // display current assignments
         cout <<"Value of x is: "<<x <<". So, "<< "!(x < 5): " << !(x < 5) << endl;
         cout <<"Value of y is: "<<y <<". So, "<< "!(y >= 7): " << !(y >= 7) << endl;

         // test for validity
         if ((!(x < 5) && !(y >= 7)) == (!((x < 5) || (y >= 7)))) {
            cout << "!(x < 5) && !(y >= 7) is equivalent to"
               << " !((x < 5) || (y >= 7))" << endl;
         }
         else {
            cout << "!(x < 5) && !(y >= 7) is not equivalent to"
               << " !((x < 5) || (y >= 7))" << endl;
         }

         cout << endl;
      } while (!(y >= 7));
   } while (!(x < 5));


   return 0;
}