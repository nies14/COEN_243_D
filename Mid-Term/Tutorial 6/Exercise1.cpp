#include <iostream>

using namespace std;

int myPowerfunction(int x, int y)
{
    int result = 1;

    for(int i=0; i< y; i++)
    {
        result *= x;
    }

    return result;
}

int main()
{
    //find x^y

    int x, y;

    cout <<"Enter the value of x: ";
    cin >> x;

    cout <<"Enter the value of y: ";
    cin >> y;

    int result = myPowerfunction(x,y);

    cout <<"The value of "<<x <<"^"<< y <<" : " << result ;

    return 0;
}