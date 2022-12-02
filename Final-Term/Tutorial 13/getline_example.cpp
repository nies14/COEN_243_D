#include<iostream>

using namespace std;

int main()
{
    /*string a, b;

    cout << "Enter string 'a': " << endl;
    cin >> a;
    cout << a << endl;

    cout << "Enter string 'b': " << endl;
    cin >> b;
    cout << b << endl;*/


    /*string a, b;

    cout << "Enter string 'a': ";
    getline(cin,a);
    cout << a << endl;

    cout << "Enter string 'b': ";
    getline(cin, b);
    cout << b << endl;*/

    int a;
    cout << "Enter a number: " << endl;
    cin >> a;
    cin.ignore();

    string s[10], b;
    //cout << "Enter string: ";
    //cin >> b;

    for(int i=0; i<a; i++)
    {
        cout <<"Enter string "<<i<<": " << endl;
        getline(cin, s[i]);
        //cin >> s[i];
        cout <<"Value of s["<<i<<"] : " <<s[i] << endl;
    }

	
	return 0;
}