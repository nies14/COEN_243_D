#include <iostream>
#include <math.h>

using namespace std;


int main()
{
    int myArray[4];

    cout <<"Enter 4 binary digits seperated by space: "<< endl;

    for (int i=0; i< 4; i++)
    {
        cin >> myArray[i];
    }

    int result = 0;

    for(int i = 3,k=0; i >=0; i--,k++)
    {
        result = result + myArray[i] * pow(2,k);
    }

    cout <<"Equivalent Decimal number is: "<<result <<endl;
}