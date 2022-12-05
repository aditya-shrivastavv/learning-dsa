#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
//? -< MAXIMUM HEAP >-
    priority_queue<int> pq; 
    pq.push(5);         // {5}
    pq.push(2);         // {5,2}
    pq.push(8);         // {8,5,2}
    pq.emplace(10);     // {10,8,5,2}    

    cout << pq.top();   // prints 10
    pq.pop();           // 10 removed
    cout << pq.top();   // prints 8

//? -< MINIMUM HEAP >-
    priority_queue<int,vector<int>,greater<int>> pqq;
    pqq.push(5);
    pqq.push(2);
    pqq.push(8);
    pqq.emplace(10);

    cout < pqq.top();
}
//! size,swap,empty function same as other.
//* DATA is not stored in linear manner, a tree data structure is maintained.

//* PUSH => O(log n)
//* TOP => O(1)
//* POP => O(log n)