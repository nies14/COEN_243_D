#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the value of Binary Number: ";

    int binaryNumber = 0;
    //int hex[1000];

    cin >> binaryNumber;

    if(binaryNumber >=0000 and binaryNumber <=1111)
    {
        int temp = binaryNumber, decimal = 0, base = 1;

        while(temp>0)
        {
            int remainder = temp % 10;
            decimal = decimal  + (remainder * base);
            base = base * 2;
            temp = temp / 10;
        }
        //cout << result << endl;

        cout << binaryNumber<<"b=";
        if (decimal > 9)
        { 
            cout<<(char)(decimal + 55);
        }
        else
        {
            cout<<decimal;
        }

        cout <<"H" <<endl;

        /* int i = 0;
        while (decimal != 0) 
        {
            hex[i] = decimal % 16;
            decimal = decimal / 16;
            i++;
        }

        cout << binaryNumber<<"b=";
        for (int j = i - 1; j >= 0; j--)
        {
            if (hex[j] > 9)
            { 
                cout<<(char)(hex[j] + 55);
            }
            else
            {
                cout<<hex[j];
            }
        }
        cout <<"H" <<endl; */
    }
    else
    {
        cout <<"Invalid binary number" << endl;
    }
}