#include <iostream>
using namespace std;

int main() 
{
    int x = 0, y = 0, z = 0, min = 0, max = 0;

    cout << "Enter three integers: "<<endl;
    cin >> x >> y >> z;

    //this if-else block for determining max number
    if(x > y && x > z)
    {
        max = x;
    }
    else if(y > x && y > z)
    {
        max = y;
    }
    else
    {
        max = z;
    }

    //this if-else block for determining min number
    if(x < y && x < z)
    {
        min = x;
    }
    else if(y < x && y < z)
    {
        min = y;
    }
    else
    {
        min = z;
    }

    cout <<"Sum: " << x+y+z << endl;
    cout <<"Average: " << (float)(x+y+z)/3 << endl;
    cout <<"Min: " << min << endl;
    cout <<"Max: " << max << endl;
} 