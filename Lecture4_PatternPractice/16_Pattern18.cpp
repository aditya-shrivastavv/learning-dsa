/*
A B C D
E F G H
I J K L
M N O P
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
        while (j <= n)
        {
            cout << c <<" ";
            c++;
            j++;
        }
        i++;
        cout <<endl;
    }

    return 0;
}