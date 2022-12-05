#include <iostream>
using namespace std;

int main() {
    int a, b;
//separation of a and b can be done using-
//enter, space, tab. while inputing values. in the below code.
//means cin does not read \n, \t, _. 
    cin >> a >> b;

    if (a > b)
    {
        cout << "a is bigger.";
    }
    else if (a < b)
    {
        cout << "b is bigger.";
    }
    else
    {
        cout << "both are equall";
    }

    return 0;
}