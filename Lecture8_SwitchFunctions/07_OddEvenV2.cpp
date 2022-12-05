//? tell whether a particular number is even or odd by using functions.
#include <iostream>
using namespace std;

bool isEven(int x);

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    
    if (isEven(n))
    {
        cout <<"Number is Even.";
    }
    else 
    {
        cout <<"Number is Odd.";
    }

    return 0;
}

bool isEven(int x) //* 1 -> Even, 0 -> Odd.
{
    if (x&1) //odd
    {
        return 0;
    }

    return 1; //even
}