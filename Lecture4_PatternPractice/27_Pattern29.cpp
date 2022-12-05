/*
version-1
(without spaces)
****
 ***
  **
   *

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
    //prints the spaces
        while (j <= i-1)
        {
            cout << " ";
            j++;
        }
        
        j = 1; //so that j can be compared in the next loop.

    //prints the stars
        while (j <= n-i+1)
        {
            cout << "*";
            j++;
        }
        cout <<endl;
        i++;
    }
}