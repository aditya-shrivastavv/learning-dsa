/*
version-1
(without spaces)
12345
 2345
  345
   45
    5

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

        j = i;
        while (j <= n)
        {
            cout << j;
            j++;
        }
        cout <<endl;
        i++;
    }
    return 0;
}