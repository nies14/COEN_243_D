#include<iostream>

using namespace std;

int main()
{
    char a[20];
    
    /*cout << "Enter a string: " << endl;
    cin >> a;
    cout << a << endl;*/

    cout << "Enter a string: " << endl;
    cin.get(a, 10);
    cout << a << endl;
	
	return 0;
}