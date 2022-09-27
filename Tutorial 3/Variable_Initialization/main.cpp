#include <iostream>

using namespace std;

int main()
{
    //way to initialize integar variable (non-decimal numbers) separately
    int number1 = 10;
    int number2 = 15;

    cout <<"number1: "<<number1 <<" number2: "<<number2 <<endl;

    //way to initialize integar variable (non-decimal numbers) together
    int number3 = 10, number4 = 15;
    cout <<"number3: "<<number3 <<" number4: "<<number4 <<endl;

    //another way to initialize integar variable (non-decimal numbers) together
    int number5{10}, number6{15};
    cout <<"number5: "<<number5<<" number6: "<<number6 <<endl;


    return 0;
}
