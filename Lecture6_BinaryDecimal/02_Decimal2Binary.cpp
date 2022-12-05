// write a program to convert a decimal number into binary.
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "enter n: "; cin >> n; 

    int i = 0; 
    float ans = 0;
/*
USE    float   INSTEAD OF   int .
there was some compiler issue ,it is not giving correct answer in int type.
*/
    
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10,i) ) + ans;
        n = n >> 1;
        i++;
    }
    
    cout <<"answer is " << ans <<endl;

    return 0;
}