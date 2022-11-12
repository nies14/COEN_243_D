#include <iostream>

using namespace std;

//this function determines whether y is a multiple of x
bool determineMultiple(int x, int y)
{
    if(y % x == 0)
    {
        return true;
    }
    
    return false;
}

int main()
{
    int x, y;

    // loop for 3 pair of inputs
    for (unsigned int i{1}; i <= 3; ++i) 
    {

        cout <<"Enter the value of x: ";
        cin >> x;

        cout <<"Enter the value of y: ";
        cin >> y;

        bool result = determineMultiple(x,y);

        if(result == true)
        {
            cout << y <<" is a multiple of " << x << endl;
        }
        else
        {
            cout << y <<" is not a multiple of " << x << endl;
        }

        cout << endl;

    }

    return 0;
}