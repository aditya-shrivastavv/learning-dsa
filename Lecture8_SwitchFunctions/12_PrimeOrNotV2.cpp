#include <iostream>
using namespace std;

bool isPrime(int n);

int main()
{
    int n;
    cout <<"enter n: "; cin >> n;

    bool answer = isPrime(n);
    
    cout << answer <<endl;
    return 0;
}

bool isPrime(int n)
{
    int i=2;
    bool a=1;
    while (i < n)
    {
        if (n % i == 0)
        {
            return 0; //! divide hogya , not a prime number.
        }
        i++;
    }
    return 1; //! upar koi 0 return nhi hua, return 1 -> prime number. 
}
//* 1 --> Prime
//* 0 --> NotPrime