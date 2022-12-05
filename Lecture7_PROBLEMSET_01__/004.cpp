// https://leetcode.com/problems/complement-of-base-10-integer/
// 1009. Complement of Base 10 Integer

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "enter n: "; cin >> n;

    int cBinary = 0, cBit = 0, i = 0;

    while (n)
    {
        int LastBit = n&1;
        if (LastBit == 1)
        {
            cBit = 0;
        }
        else 
        {
            cBit = 1;
        }

        cBinary = (cBit * pow(10,i) )+ cBinary;
        i++;
        n = n >> 1;
    }

    int number = 0, j = 0, FinalAns = 0;

    while (cBinary)
    {
        int Ldig = cBinary%10;
        FinalAns = (Ldig * pow(2,j) )+ FinalAns;
        cBinary = cBinary/10;
        j++;
    }
    cout << FinalAns <<endl;

    return 0;
}