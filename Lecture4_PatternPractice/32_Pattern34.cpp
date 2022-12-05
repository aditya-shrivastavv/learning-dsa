/*
version-2
(with spaces)
        1
      2 2
    3 3 3
  4 4 4 4
5 5 5 5 5

*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"enter n: "; cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n-i)
        {
            cout <<"  ";
            j++;
        }

        j = 1;

        while (j <= i)
        {
            cout << i <<" ";
            j++;
        }
        cout <<endl;
        i++;

    }
    return 0;
}