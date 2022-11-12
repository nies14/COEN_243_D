#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double b = 1.222222222;

    cout <<"value of b without precision is: "<< b <<endl;

    cout <<"value of b with using precision is: "<<setprecision(10)<< b<<endl;
}
