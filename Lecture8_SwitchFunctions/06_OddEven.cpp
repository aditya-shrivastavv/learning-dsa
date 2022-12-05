//? tell whether a particular number is even or odd by using functions.
#include <iostream>
using namespace std;

void oddeven(int x);

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    oddeven(n);
    return 0;
}

void oddeven(int x)
{
    if (x%2 == 0)
    {
        cout <<"Even"<<endl;
    }
    else
    {
        cout <<"Odd"<<endl;
    }
}