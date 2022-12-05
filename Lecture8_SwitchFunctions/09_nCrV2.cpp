//? find nCr for user inputted n and r .solve using functions.
#include <iostream>
using namespace std;

int factorial(int x)
{
    int fact=1;
    for (int i=1; i<=x; i++)
    {
        fact = fact*i;
    }
    return fact;
}

int nCr(int n,int r)
{
    int num = factorial(n);
    int denom = (factorial(r) * factorial(n-r));
    return num/denom;
}

int main() 
{
    int n,r;
    cout <<"enter n,r : "; cin >> n >> r;

    int a = nCr(n,r);
    cout << n <<"C"<< r <<" = "<< a << endl;

    return 0;
}