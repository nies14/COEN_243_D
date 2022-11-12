#include <iostream>

using namespace std;

int main()
{
    int x;
    
    cout <<"Enter the value of x: "<<endl;
    cin >> x;

    if (x < 5)
    {
        cout <<"x is less than 5" <<endl;
    }
    else if (x == 5)
    {
        cout <<"x is equal to 5" <<endl;
    }
    else if (x > 5 && x <= 10)
    {
        cout <<"x is greater than 5 but less or equal to 10" <<endl;
    }
    else
    {
        cout <<"x is greater than 10" <<endl;
    }

}
