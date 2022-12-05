/*
version-1
method-2
(without spaces)
   1
  121
 12321
1234321

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
// print karo spaces (first trinangle)
        int sp = n-i;
        while (sp) // when sp becomes zero it becomes false
        {
            cout <<" ";
            sp--;
        }
// print karo 2nd triangle
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }
// print karo 3rd triangle
        int s = i-1;
        while (s) //when s becomes zero it becomes false
        {
            cout << s;
            s--;
        }

        cout <<endl;
        i++;
    }
}