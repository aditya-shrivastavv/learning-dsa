#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1 = {20,60,15,45,30};
    for (vector<int>::iterator i = v1.begin(); i != v1.end(); i++) {
        cout << *(i) <<" ";
    }
    cout <<endl;
// simplifing
    for (auto i = v1.begin(); i != v1.end(); i++) {
        cout << *(i) <<" ";
    }
    cout <<endl;
// simplifing 2
    for (auto i : v1) {
        cout << i <<" ";
    }
    cout <<endl;
}