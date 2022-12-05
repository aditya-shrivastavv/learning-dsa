#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;

    bool isPrime = true; // assumed that it is prime number.
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true)
    {
        cout << "Prime Number";
    }
    else 
    {
        cout << "Not a Prime Number";
    }
}
// made on my own..
// bool datatype stores true(1) or false(0).