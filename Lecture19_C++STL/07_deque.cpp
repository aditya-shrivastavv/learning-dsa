#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq;
    dq.push_back(1);        // {1}
    dq.emplace_back(2);     // {1,2}
    dq.push_front(5);       // {5,1,2}
    dq.emplace_front(4);    // {4,5,1,2}

    dq.pop_back();          // {4,5,1}
    dq.pop_front();         // {5,1}

    dq.back();              // 5
    dq.front();             // 1
}

//! rest functions are same as vector.
//? begin, end, rbegin, rend, clear, insert, size, swap