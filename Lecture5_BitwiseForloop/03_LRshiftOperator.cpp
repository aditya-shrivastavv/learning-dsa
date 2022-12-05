/*
-----------------LEFT SHIFT-------------------
5 << 1 : 5 ko 1 bar left shift kardo.
    5 => 0000 0000 0000 0101
5 << 1=> 0000 0000 0000 1010 => (10)    5 x 2


3 << 2 : 3 ko 2 bar left shift kardo.
    3 => 0000 0000 0000 0011
3 << 2=> 0000 0000 0000 1100 => (12)    3 x (2 x 2)

in mostly cases(small numbers) the numbers gets multiplied by 2, but in case of large 
numbers the number might become a negative number practically.

-----------------RIGHT SHIFT-------------------
5 >> 2 : 5 ko 2 bar right shift kardo.
    5 => 0000 0000 0000 0101
5 >> 2=> 0000 0000 0000 0001 => (1)     5 / (2 x 2)

NOTE :- 
For +ve numbers-
    Padding always happens with 0.
For -ve numbers-
    Padding is compiler dependent. ?? can't predict .

Padding- new numbers addition during L or R shift at the L or R ends.
*/
#include <iostream>
using namespace std;

int main()
{
    cout << (14 << 1) <<endl;   // 28
    cout << (15 << 2) <<endl;   // 60
    cout << (30 >> 2) <<endl;   // 7
    cout << (200 >> 3) <<endl;  // 25

    return 0;
/*
inshort << 2 se multiply hota hai aur >> 2 se divide hota hai.
*/
}