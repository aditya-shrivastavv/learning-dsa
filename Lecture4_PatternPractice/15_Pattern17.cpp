/*
version-2 (better than v1)
A B C D
A B C D 
A B C D
A B C D
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout <<"enter n: "; cin >> n;

    int i = 1;
    
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char c = 'A' + j - 1;
            cout << c <<" ";
            j++;
        }
        i++;
        cout << endl;
    }
}
//now we did it the way suggested in file 13th.
//i.e. making a new varible in char.