#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    
    string binaryNumberString;

    cout << "Enter the binary number: " <<endl;
    cin >> binaryNumberString;

    int result = 0;

    for (int i=binaryNumberString.size()-1,k=0; i>=0; i--, k++) //size() function returns the length of your string
    {
        if (binaryNumberString[i]=='1')
        {
            result = result + pow(2,k);
        }
    }

    cout <<"Equivalent decimal number is: "<<result <<endl;

}
