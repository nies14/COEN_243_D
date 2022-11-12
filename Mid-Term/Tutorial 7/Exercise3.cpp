#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n == 1)
    {
        return 1;
    }

    int res = n * factorial(n-1);

    cout <<"Factorial of "<< n <<" is: " << res << endl;

    return res;
}

int main() 
{
    cout << factorial(4) <<endl;
    return 0;
} 
