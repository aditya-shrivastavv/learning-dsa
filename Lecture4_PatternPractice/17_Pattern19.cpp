/*
version-1
A B C D
B C D E
C D E F
D E F G
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
        char c = ('A' + i - 1);
        while (j <= n)
        {
            cout << c <<" ";
            j++;
            c++; 
        }
        cout <<endl;
        i++;
    }
}