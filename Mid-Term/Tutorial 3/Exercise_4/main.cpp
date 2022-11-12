#include <iostream>

using namespace std;

int main()
{
    cout << "Enter two numbers: " << endl;
    int number1, number2;

    cin >> number1 >> number2;

    int sum = number1 + number2;
    int product = number1 * number2;
    int difference = number1 - number2;
    double quotient = (double) number1 / (double) number2;
    int remainder = number1 % number2;

    cout <<"Sum of number 1 & number 2 is: "<< sum <<endl;
    cout <<"Difference of number 1 & number 2 is: "<< difference <<endl;
    cout <<"Product of number 1 & number 2 is: "<< product <<endl;
    cout <<"Quotient of number 1 & number 2 is: "<< quotient <<endl;
    cout <<"Remainder of number 1 & number 2 is: "<< remainder <<endl;

    return 0;
}
