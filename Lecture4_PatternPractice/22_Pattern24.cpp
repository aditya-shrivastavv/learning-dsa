/*
D
C D
B C D
A B C D
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n: "; cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << (char)('A' + n - i + j - 1) <<" ";
            j++;
        }
        cout <<endl;
        i++;
    }

    return 0;
}