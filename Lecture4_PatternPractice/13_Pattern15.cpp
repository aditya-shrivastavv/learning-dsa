/*
version-2 (better than v1)
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

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << (char)('A' + i - 1) <<" ";
            j++;
        }
        cout <<endl;
        i++;
    }

    return 0;
}
/*
we used typecasting here....
it can also be done through by storing the 'A' + i - 1 in a new char varible and printing
that variable.
*/