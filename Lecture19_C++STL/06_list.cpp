#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> ls;
    ls.push_back(5);    // {5}
    ls.emplace_back(10);    // {5,10}

    ls.push_front(2);   // {2,5,10}
    ls.emplace_front(1);    // {1,2,5,10}

}
//* 1. a list gives you a front operation as well, vector does not.
//* 2. i vector we use insert, whose time complexity is very bad compared to front opertations here.
//! rest functions are same as vector.
//? begin, end, rbegin, rend, clear, insert, size, swap