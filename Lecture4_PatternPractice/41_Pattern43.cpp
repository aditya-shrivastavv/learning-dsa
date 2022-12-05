/*
for n = 5

1234554321
1234**4321
123****321
12******21
1********1

method-2
(by considering 4 triangles)
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

// triangle 1 : the numbers
        int j = 1;
        while (j <= n-i+1)
        {
            cout << j;
            j++;
        }

// triangle 2 : the star pyramid 1st half
        j = 1;
        while (j <= i-1)
        {
            cout << '*';
            j++;
        }
        
// triangle 3 : the star pyramid 2nd half
        j = 1;
        while (j <= i-1)
        {
            cout << '*';
            j++;
        }

// triangle 4 : the numbers
        j = n-i+1;
        while (j >= 1)
        {
            cout << j;
            j--;
        }

        cout <<endl;
        i++;
    }

    return 0;
}