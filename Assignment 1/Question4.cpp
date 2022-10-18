#include <iostream>
using namespace std;

int main()
{
    string identifier;

    cout <<"Enter 3-character identifier: ";

    cin >> identifier;

    bool valid = true;
    int index = -1;

    for(int i=0; i<3; i++)
    {
        index = (int) identifier[i];
        if(( index >= 65 && index <=90) || (index >= 97 && index <= 122))
        {
            continue;
        }
        else
        {
            index = i;
            valid = false;
            break;
        }
    }

    if(valid)
    {
        cout << identifier <<" is a valid identifier" << endl;
    }
    else
    {
        cout << identifier <<" is an invalid identifier. Check char " <<index << endl;
    }


    return 0;
}