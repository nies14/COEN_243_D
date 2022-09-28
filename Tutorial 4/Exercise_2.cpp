#include <iostream>

using namespace std;

int main()
{
    cout <<"Enter 10 numbers seperated by space: " << endl;
    int myArray[10];

    for (int i=0; i< 10; i++)
    {
        cin >> myArray[i];
    }

    int maximumNumber = -99999999;

    for (int i=0; i< 10; i++)
    {
        if(maximumNumber < myArray[i])
        {
            maximumNumber = myArray[i];
        }
    }

    cout <<"Maximum number is: "<<maximumNumber<<endl;
    

}
