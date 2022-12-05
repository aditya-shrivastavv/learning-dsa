// determine whether a given number is prime or not.
#include <iostream>
using namespace std;

int main() {
    int n, i=2;
    cout << "enter n: "; cin >> n;

    while (i<n) {
        if (n%i == 0) {
            cout << "Not a prime number.";
            break;
        }
        else {
            cout << "Prime.";
        }
        i = i + 1;
    }
    return 0;
}
/*
not completed will see in the next lecture(5).
*/