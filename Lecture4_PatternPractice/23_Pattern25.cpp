/*
version-1
(without spaces)
    *
   **
  ***
 ****
*****

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
    //prints the spaces before the stars.
        while (j <= n-i)
        {
            cout << " ";
            j++;
        }
        j = 1; //so that j can be compared with i with it's initial value.

    //prints the stars.
        while (j <= i)
        {
            cout <<"*";
            j++;
        }
        cout <<endl;
        i++;
    }

    return 0;

}