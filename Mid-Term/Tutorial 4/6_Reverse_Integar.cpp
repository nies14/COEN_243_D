#include <iostream>

using namespace std;


int main()
{
    int x;

    cout <<"Enter the value of x: " <<endl;

    cin >> x;

    int temp = x, res = 0;

    while(temp != 0)
    {
        int remainder = temp % 10;
        //cout <<"Remainder: "<<remainder <<endl;
        temp = temp /10;
        //cout <<"New quotient: "<<temp <<endl;
        res = res* 10 + remainder;
        //cout <<"Result at this stage:  "<< res <<endl;
    }

    cout <<"Reverse value is: " <<res <<endl;


}

