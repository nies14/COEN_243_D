#include <iostream>

using namespace std;


int main()
{
    int x;

    for (int i=1; i <=5; i++)
    {
        cout <<"Enter how many stars you want to print: " << endl;

        cin >> x;

        for(int i = 1; i <= x; i++)
        {
            cout << "*";
        }

        cout << endl;
    }


}


