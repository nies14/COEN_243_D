#include <iostream>

using namespace std;

int main()
{
    //problem is: determine the sum from 1 to n

    // Using brute force/straight forward solution
    int arr[5] = {1,2,3,4,5}, n = 5, sumBruteForce = 0, sumOptimized = 0;

    for(int i=0; i<n;i++)
    {
        sumBruteForce += arr[i];
    }
    cout <<"Sum by brute force is: "<< sumBruteForce << endl;

    // an optimized solution solution is (n*(n+1))/2

    sumOptimized = (5*(5+1))/2;  //5 because the last number of our arrray is 5

    cout <<"Sum by an optimized solution is: "<< sumOptimized << endl;



   return 0;
}