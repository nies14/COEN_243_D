#include <iostream>

using namespace std;

int main()
{
    int x;
    
    cout <<"Enter the value of x: "<<endl;
    cin >> x;

    switch (x)
    {
    case 1:
        cout <<"x is equal to 1"<<endl;
        break;
    case 2:
        cout <<"x is equal to 2"<<endl;
        break;
    default:
        cout <<"x is greater than 2"<<endl;
        break;
    }
}
