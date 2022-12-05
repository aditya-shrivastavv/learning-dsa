#include <iostream>
using namespace std;

int main()
{
    int a = 20;
    cout << a <<endl;

    if (true)
    {
        cout << a << endl; // it gives the global(original) value
        int a = 99; 
// this variable a is declared inside these variable
// it's scope is if block
// it cannot be used outside these block
        cout << a << endl; // now it gives the new(duplicate) value 

        int b = 51;
    }

    cout << a <<endl; // the new value is not in it's reach, so it prints the original value
    // cout << b <<endl; // b cannot be acessed outside if block.
}

// a variable declared once in a block cannot be declared again in the same block. 