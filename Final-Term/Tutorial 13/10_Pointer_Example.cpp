#include<iostream>

using namespace std;

int main()
{
    /*int a = 5;
    int b = a;
    a = 7;

    cout << b << endl;*/

    int a = 5;
    int *b = &a;
    a = 7;

    cout << *b << endl;
	
	return 0;
}