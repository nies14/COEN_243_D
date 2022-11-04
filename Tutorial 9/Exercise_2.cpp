#include <iostream> 
#include <math.h>
#include <array>
#include <cstring>

using namespace std;

int prime[1010];

void detectPrimewithoutSieve(int n)
{
    bool isPrime = true;
    for(int i = 2; i < n ; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
        }
    }

    cout << boolalpha << isPrime << endl;
}

void sieveOfEratosthenes(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(prime[i] == 0)
        {
            for(int j = i*i; j<=n; j += i)
            {
                prime[j] = 1;
            }
        }
    }
}


int main()
{
    //detectPrimewithoutSieve(7);
    memset(prime, 0, sizeof(prime));
    sieveOfEratosthenes(1000);
    
    if(prime[235] == 1)
    {
        cout << "Not Prime" << endl;
    }
    else
    {
        cout <<"Prime" << endl;
    }
    
    return 0;
} 