/*
A
B C
C D E 
D E F G
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout <<"enter n: "; cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << (char)('A' + i + j - 2) <<" ";
            j++;
        }
        cout <<endl;
        i++;
    } 
}