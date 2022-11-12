#include <iostream>
using namespace std;

int recursiveExponential(int base, int exponent)
{
    if(exponent == 1)
    {
        return base;
    }

    cout <<"exponent: " << exponent <<endl;
    
    int res = base * recursiveExponential(base,exponent-1);
    cout << res << endl;

    return res;
}

void printLoopRecursive(int i)
{
    if(i == 0)
    {
        return;
    }

    printLoopRecursive(i-1);
    cout << i << endl;
}

int main() 
{
    cout << recursiveExponential(2,3) <<endl;
    printLoopRecursive(5);
    return 0;
} 
