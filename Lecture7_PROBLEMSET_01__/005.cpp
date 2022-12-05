// 231. Power of Two
// https://leetcode.com/problems/power-of-two/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "enter n: "; cin >> n;

    bool ans = 0;
    int x = 0;

    if (n > 0)
    {
        while (x <= 31)
        {
            if (n == pow(2,x))
            {
                ans = 1;
                break;
            }
            x++;
        }
    }
    else if (n < 0)
    {
        while (x <= 30)
        {
            if (n == (-pow(2,x)))
            {
                ans = 1;
                break;
            }
            x++;
        }
    }
    else 
    {
        ans = 0;    
    }

    cout << ans;

}