#include <iostream> 
using namespace std;

int main()
{
    int i = 4;
    int a = i++;
    cout << a <<endl; // 4
    cout << i <<endl; // 5
// post me pehele value use karlo fir change karo.

    int j = 6;
    int b = ++j;
    cout << b <<endl; // 7
    cout << j <<endl; // 7
// pre me pehele change karo fir nayi value use karlo.
}