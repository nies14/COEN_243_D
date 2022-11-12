#include <iostream> 
#include <math.h>
#include <array>
#include <cstring>

using namespace std;

int recursiveMinimum(int myArray[], int start, int end)
{
    //cout << "len: " <<len << endl;
    if(start == end - 1)
    {
        return myArray[start];
    }

    int minimum = min(myArray[start], recursiveMinimum(myArray, start+1, end));

    return minimum;
}

int main()
{
    int arr[11] = {2,6,3,8,1,8, 4,-123,6,9,0};
    int len = sizeof(arr)/sizeof(int);
    cout << recursiveMinimum(arr, 0, len) << endl;
    return 0;
} 