#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int binaryNumber;

    cout <<"Enter the binary number: "<<endl;

    cin >> binaryNumber;

    int divisionResult = 1, remainder = 0, result = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = binaryNumber;
    while (temp) 
    {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        result = result + last_digit * base;
 
        base = base * 2;
    }

    cout <<"Equivalent Decimal number is: "<<result <<endl;

}
