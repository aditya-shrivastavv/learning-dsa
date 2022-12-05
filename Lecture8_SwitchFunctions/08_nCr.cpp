//? Find out nCr for input n and r.
#include <iostream>
using namespace std;

int ncr(int n, int r);

int main()
{
    int n, r;
    cout <<"enter n and r : "; cin >> n >> r;

    cout << n <<" c "<< r <<" = "<<ncr(n,r) <<endl;
    return 0;
}

int ncr(int n, int r)
{
    int i=1;
    int num=1;
    while (i <= r)
    {
        num = n * num;
        n--;
        i++;
    }
    i=1;
    int den=1;
    while (i <= r)
    {   
        den = den * i;
        i++;
    }
    return num/den;
}