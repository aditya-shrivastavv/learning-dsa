#include <iostream>
using namespace std;

int main()
{
    int n;
    cout <<"enter n:" ; cin >> n;

    int n1=0, n2=1, fib;
    cout << n1 <<" " << n2 <<" ";
    for (int i = 3; i <= n; i++)
    {
        fib = n1 + n2;
        cout << fib <<" ";
        n1 = n2;
        n2 = fib;
    }
}