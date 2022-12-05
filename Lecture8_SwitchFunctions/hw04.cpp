/*
give the nth term of Fibonacci series.
on user input n.
*/
#include <iostream>
using namespace std;

int Fibon(int n);

int main() {
    int n;
    cout <<"enter n : "; cin >> n;

    cout << n <<"th term of Fibonacci = "<< Fibon(n);
    return 0;
}

int Fibon(int n) {
    int a = 0, b = 1;
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    int i=1,term;
    while (i <= n-2) {
        term = a + b;
        a = b;
        b = term;
        i++;
    }
    return term;
}