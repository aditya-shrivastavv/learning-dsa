/*
version-2
1
2 3
4 5 6
7 8 9 10
*/
#include <iostream>
using namespace std;

int main() 
{
    int n, count = 1;
    cout << "enter n: "; cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = i;
        while (j >= 1)
        {
            cout << count <<" ";
            count++;
            j--;
        }
        cout <<endl;
        i++;
    }

    return 0;
}