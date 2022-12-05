/*
Given 2 Numbers a and b.
give the total number of 1 bits in a and b...

ex => 2 = 10 and 3 = 11. number of 1 bits = 1+1+1 = 3.
*/
#include <iostream>
using namespace std;

int bitcounter(int n);

int main()
{
    int a, b;
    cout <<"enter a and b: "; cin >> a >> b;

    int a1bits = bitcounter(a);
    int b1bits = bitcounter(b);

    int answer = a1bits + b1bits;

    cout << answer << endl;
}

int bitcounter(int n)
{
    int counter = 0;
    while (n > 0)
    {
        int c = n&1;
        if (c == 1)
        {
            counter++;
        }
        n = n >> 1;
    }
    return counter;
}
// ? wow !!