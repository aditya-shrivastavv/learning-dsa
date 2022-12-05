#include <iostream>
using namespace std;

int main() {

    char ch;
    cout << "enter any character : ";
    cin >> ch;
    int a = ch;

    if (a > 47 && a < 58) 
        cout << "A Number.";
    else if (a > 64 && a < 91)
        cout << "A UPPERCASE Alphabet.";
    else if (a > 96 && a < 123)
        cout << "A lower case Alphabet.";
    else
        cout << "You didn't enter a number or alphabet.";

    return 0;
}