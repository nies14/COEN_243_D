#include <iostream>

using namespace std;

int main()
{
    cout <<"---------Example of Integar array--------------"<<endl;
    //array declaration
    int myarray[5];

    //assigning value by index
    myarray[0] = 1;
    myarray[1] = 2;
    myarray[2] = 3;
    myarray[3] = 4;
    myarray[4] = 5;

    //printing the of a specefic index
    cout << "Value of 1st element of myarray: " <<myarray[0] << endl;
    cout << "Value of 2nd element of myarray: " <<myarray[1] << endl;

    //array input using loop

    int myarray2[5];
    cout <<"Give input of 5 different numbers seperated by space: "<<endl;
    //will have to give 5 inputs
    for(int i=0;i<5;i++)
    {
        cin >> myarray2[i];
    }

    //printing array value by loop

    for(int i=0; i<5; i++)
    {
        cout << "Value of "<<i <<" st element of myarray: " <<myarray2[i] << endl;
    }


    cout <<"----------Example of string array--------------"<<endl;

    //array declaration
    string cars[4];

    //assigning value by index
    cars[0] = "BMW";
    cars[1] = "Audi";
    cars[2] = "Ford";
    cars[3] = "Mazda";

    //printing the of a specefic index
    cout << "Value of 1st element of cars array: " <<cars[0] << endl;
    cout << "Value of 2nd element of cars array: " <<cars[1] << endl;

    cout <<"----------Example of char array--------------"<<endl;

    //char array declaration
    char charArray[4];

    //assigning value by index
    charArray[0] = 'C'; //put single colon like this. Do not put double colon like string
    charArray[1] = 'O';
    charArray[2] = 'E';
    charArray[3] = 'N';

    //printing the of a specefic index
    cout << "Value of 1st element of char array: " <<charArray[0] << endl;
    cout << "Value of 2nd element of char array: " <<charArray[1] << endl;


    //char array declaration and initialization at the same time
    char charArray2[5] = "COEN";  //put double colon like this and give size of array = total number of chracters + 1
                                  //otherwise it will throw an error because of null character
                                  //like here i have 4 characters so i'm giving it a size of 5

    //printing the of a specefic index
    cout << "Value of 1st element of char array 2: " <<charArray2[0] << endl;
    cout << "Value of 2nd element of char array 2: " <<charArray2[1] << endl;


}
