#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;       //  -< FIRST IN FIRST OUT >-
    q.push(1);          // {1}
    q.push(2);          // {1,2}
    q.emplace(4);       // {1,2,4}

    q.back() += 5;

    cout << q.back();   // prints 9
    cout << q.front();  // prints 1

    q.pop();            // 1 removed

    cout << q.front();  // prints 2
}   //! O(1)
//* size,swap,empty same as stack.