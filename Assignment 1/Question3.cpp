#include <iostream>
using namespace std;

int main()
{
    string userName, password, securityCode;
    string userName2, password2, securityCode2;

    cout << "Username: ";
    cin >> userName;

    cout << endl;

    cout << "Password: ";
    cin >> password;

    cout << endl;

    cout << "Security Code: ";
    cin >> securityCode;

    cout << endl << endl;

    cout << "Username: ";
    cin >> userName2;

    cout << endl;

    cout << "Password: ";
    cin >> password2;

    cout << endl;

    cout << "Security Code: ";
    cin >> securityCode2;

    if (userName == userName2 && (password == password2 || securityCode == securityCode2)) 
    {
        cout << "Successful login.";
    }
    else
    {
       cout << "Invalid, try again.";
    }

    return 0;
}