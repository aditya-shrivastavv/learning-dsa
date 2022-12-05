// https://leetcode.com/problems/number-of-1-bits/
// 191. Number of 1 Bits

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n: "; cin >> n;

    int count = 0;
    while (n != 0)
    {
        if ( n&1 )
        {
            count++;
        }
        n >> 1;
    }

    cout << "number of 1 bits = " << count;

    return 0;
}

// will not work on vs code because input is 16 bits long.
// but works fine on leetcode