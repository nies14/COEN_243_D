#include <iostream>
using namespace std;

int towerOfHanoi(int numberOfDisk)
{

}

int fibonacci(int n)
{
    if(n == 1 || n == 2)
    {
        return 1;
    }

    int res = fibonacci(n-1) + fibonacci(n-2);

    return res;
}


int towerOfHanoi(int n, char source, char destination, char auxiliary)
{
    if(n==0)
    {
        return 0;
    }

    towerOfHanoi(n-1, source, auxiliary, destination);
    cout << "Move " << n << " from " << source <<" to " << destination << endl;
    towerOfHanoi(n-1, auxiliary, destination, source);
}



int main() 
{
    //cout << towerOfHanoi(4, 'A', 'B', 'C') <<endl;

    int x;
    for(x = 0; x < 5; ++x);
    {
        cout << x<< endl;
    }

    return 0;
} 
