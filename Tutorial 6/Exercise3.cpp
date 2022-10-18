#include <iostream>

using namespace std;

//this function's purpose is to determine whether a number is even or add
bool isEven(int);           // function prototype

int main()
{
   for (unsigned int i{1}; i <= 3; ++i) 
   {
        int number;
        cout << "Enter an integer: ";
        cin >> number;
   
        // determine if input is even
        if (isEven(number)) 
        {
            cout << number << " is an even integer\n\n";
        }
        else {
            cout << number << " is an odd integer\n\n";
        }
   }

    return 0;
}

bool isEven(int number)
{
    if (number % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}