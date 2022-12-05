/*
version-1
(without spaces)
1111
 222
  33
   4

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
        while (j <= i-1)
        {
            cout <<" ";
            j++;
        }

        j = 1;

        while (j <= n-i+1)
        {
            cout << i;
            j++;
        }
        cout <<endl;
        i++;
    }

    return 0;
}