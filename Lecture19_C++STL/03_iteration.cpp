#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1 = {20,60,15,45,30};
// simple way to access.
    cout << v1[2] << endl;      // 15
    cout << v1.at(2) << endl;   // 15 // not used much.
// other way is iterator.
    vector<int>::iterator i1 = v1.begin();     // i points to the memory location of 20.
    vector<int>::iterator i2 = v1.end();     // i points to the memory location after 30, i2-- points to 30.
    // the never used.
    vector<int>::iterator i3 = v1.rend();     // i points before 20.    
    vector<int>::iterator i4 = v1.rbegin();   // i points to 30, i++ points to 45. 

    cout << v1.front() <<" "<< v1.back() <<endl;    // 20 and 30.
}