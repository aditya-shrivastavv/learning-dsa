/*
version-2
(with spaces)
1 1 1 1
  2 2 2
    3 3
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
            cout <<"  ";
            j++;
        }

        j = 1;

        while (j <= n-i+1)
        {
            cout << i <<" ";
            j++;
        }
        cout <<endl;
        i++;
    }

    return 0;
}