#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter any number : ";
    cin >> n;

// if n is positive.
    if (n > 0)
        cout << "n is Positive Number.\n";
// if n is negative.
    else if (n < 0)
        cout << "n is Negative Number. \n";
// then it must be zero.
    else 
        cout << "n is Zero";
    
    return 0;
}