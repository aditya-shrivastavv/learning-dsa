/*
version-1
1
2 3
3 4 5 
4 5 6 7 
*/
#include <iostream> 
using namespace std;

int main()
{
    int n, count;
    cout << "enter n: "; cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1; 
        int count = i;
        
        while (j <= i)
        {
            cout << count <<" ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}