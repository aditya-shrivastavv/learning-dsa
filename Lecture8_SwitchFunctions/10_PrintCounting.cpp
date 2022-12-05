#include <iostream>
using namespace std;

void counting(int n); //* <-- Function Prototype/Signature

int main()
{
    int n;
    cout <<"enter n: "; cin >> n;

    counting(n); //* <-- Function call
}

void counting(int n) //* <-- Function Defination
{
// Function Body
    int i=1;
    while (i <= n)
    {
        cout << i <<endl;
        i++;
    }
}