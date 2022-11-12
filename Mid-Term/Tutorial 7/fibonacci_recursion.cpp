#include <iostream>
# include <iomanip>

using namespace std;

int fibonacci(int n)
{
   if(n == 0)
      return 0;

   if(n==1)
      return 1;

   int res = fibonacci(n-1) + fibonacci (n-2);

   return res;
}

int main() 
{
   
   cout << fibonacci(8) << endl;
   return 0;
} 
