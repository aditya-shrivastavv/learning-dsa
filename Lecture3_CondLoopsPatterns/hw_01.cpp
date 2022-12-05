//find sum of all even numbers from 1 to n.
#include <iostream>
using namespace std;

int main() {

    int n, i = 2, sum = 0;
    cout << "enter n : "; cin >> n;

    while (i <= n) {
        sum = sum + i;
        i = i + 2;
    }
    cout << "sum of even numbers from 1 to "<< n << " is " << sum <<endl;

    return 0;
}