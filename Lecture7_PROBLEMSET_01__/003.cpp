// https://leetcode.com/problems/reverse-integer/
// 7. Reverse Integer

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout <<"enter n : "; cin >> n;
// a value should be assigned to revnum else it will be assigned a garbage
// value, a it will cause problem;
    int revnum = 0;

    while (n)
    {
// agar int32_max/10 se revnum bada hua toh agli bar jab woh 10 se multiply hoga tho max ki limit ko cross kardega.
        if (revnum > INT32_MAX/10 || revnum < INT32_MIN/10 )
        {
            cout << 0;
            // return should be used instead of cout to break the infinite loop
            
        }
        else
        {
            revnum = (revnum * 10) + n%10;
            n = n/10;
        }
    }
    cout << revnum;
}