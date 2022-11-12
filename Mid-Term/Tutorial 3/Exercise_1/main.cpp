#include <iostream>

using namespace std;

int main()
{
    cout << "Enter two numbers: " << endl;
    int a, b, c;

    cin >> b >> c;

    //It perform's a payroll calculation
    a = b * c;

    cout <<"Product of b and c is: "<< a <<endl;

    cout << "Enter the value of a, b & c again: " << endl;
    cin >> a >> b >> c;

    cout <<"Value of a: "<< a <<endl;
    cout <<"Value of b: "<< b <<endl;
    cout <<"Value of c: "<< c <<endl;

    return 0;
}
