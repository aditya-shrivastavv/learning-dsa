// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
// 1281. Subtract the Product and Sum of Digits of an Integer

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n: "; cin >> n;

    int ld, prod = 1, sum = 0;

    while (n > 0)
    {
        ld = n % 10;
        prod = prod * ld;
        sum = sum + ld;
        n /= 10;        
    }

    cout << "sum = "<< sum <<endl;
    cout << "product = "<< prod <<endl;

    cout << "product - sum = " << prod - sum <<endl;

    return 0;
}