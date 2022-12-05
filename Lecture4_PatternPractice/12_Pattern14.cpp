/*
version-1
A A A A 
B B B B
C C C C 
D D D D
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n: "; cin >> n;

    char ch = 'A';
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << ch <<" ";
            j++;
        }
        ch++;
        cout <<endl;
        i++;
    }

    return 0;
}