#include <iostream>

using namespace std;

int main()
{
    // Using a temporary/extra variable

    int x = 5, y=2;
    cout << "Before swapping the value of x is: "<<x <<endl;
    cout << "Before swapping the value of y is: "<<y <<endl;

    int temp = x;
    x = y;
    y = temp;

    cout << "After swapping the value of x is: "<<x <<endl;
    cout << "After swapping the value of y is: "<<y <<endl;


    // Without using a temporary/extra variable

    unsigned long a = 5000, b=2111;
    cout << "Before swapping the value of a is: "<<a <<endl;
    cout << "Before swapping the value of b is: "<<b <<endl;

    a = a + b;
    b = a - b;
    a = a - b;
    
    cout << "After swapping the value of a is: "<< a <<endl;
    cout << "After swapping the value of b is: "<< b <<endl;



   return 0;
}