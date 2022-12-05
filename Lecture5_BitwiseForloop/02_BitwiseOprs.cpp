#include<iostream>
using namespace std;

int main()
{
    int a = 3;
    int b = 7;

    cout << "a&b = " << (a&b) <<endl;   // 3
    cout << "a|b = " << (a|b) <<endl;   // 7
    cout << "~a = " << ~a <<endl;       // -4
    cout << "~b = " << ~b <<endl;       // -8
    cout << "(a^b) = " << (a^b) << endl;// 4
}