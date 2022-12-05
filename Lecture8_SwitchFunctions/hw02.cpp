/*
q. given an AP. ((3*n)+7) make a function which returns the nth term of this AP.
*/
#include <iostream>
using namespace std;

int nth(int n)
{
    return (3 * n) + 7;
}

int main() {
    int n;
    cout << "enter n: "; cin >> n;
    cout <<"nth term of AP is "<< nth(n);
    return 0;
}