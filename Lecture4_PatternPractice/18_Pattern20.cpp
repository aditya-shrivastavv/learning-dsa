/*
version-2
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
    while(i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << (char)(i + j + 'A' - 2) <<" ";
            j++;
        }
        cout <<endl;
        i++;
    }
}
/*
TIP: try to make relation between i,j and n.
*/