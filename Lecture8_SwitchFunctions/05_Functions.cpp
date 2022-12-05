//? make a power(a,b) function.

#include <iostream>
using namespace std;

//! x,y passed are called arguments.
int power(int x,int y); //* function prototype 
void pow(int x,int y); //* function prototype 

int main()
{
    int a,b;
    cout << "enter a to power b: "; cin >> a >> b;

    pow(a,b); //* function call
    cout << a <<" power " << b << " = " << power(a,b); //* function call
    return 0;
}

int power(int x,int y) //* function defination
{
    int ans=1;
    for (int i=1; i<=y; i++)
    {
        ans *= x;
    }
    return ans;
}

void pow(int x,int y) //* function defination
{
    int ans=1;
    for (int i=1; i<=y; i++)
    {
        ans *= x;
    }
    cout << x <<" power " << y << " = " << ans <<endl;
}