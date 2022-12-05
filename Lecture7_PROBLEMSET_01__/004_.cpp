// https://leetcode.com/problems/complement-of-base-10-integer/
// 1009. Complement of Base 10 Integer

#include <iostream> 
using namespace std;

int main()
{
    int n;
    cout << "enter n: "; cin >> n;

    int m = n, mask = 0;

    while (m)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int ans = (~n) & mask;
    cout << ans;

    return 0;
}