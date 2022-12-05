/*
1 2 3
4 5 6
7 8 9
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;

    int counting = 1;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << counting << " ";
            counting++;
            j++;
        }
        cout << endl;
        i++;
    }
}