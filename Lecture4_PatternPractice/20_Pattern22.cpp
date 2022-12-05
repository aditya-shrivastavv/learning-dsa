/*
A
B C
D E F
G H I J
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n: "; cin >> n;

    int i = 1;
    char c = 'A';

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << c << " ";
            j++;
            c++;
        }
        cout <<endl;
        i++; 
    }

    return 0;
}