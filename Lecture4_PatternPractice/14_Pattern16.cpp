/*
version-1
A B C D
A B C D 
A B C D
A B C D
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
        char c = 'A';
        int j = 1;
        while (j <= n)
        {
            cout << c <<" ";
            c++;
            j++;
        }
        i++;
        cout << endl;
    }
}