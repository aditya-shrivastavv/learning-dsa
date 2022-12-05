#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> ms; // -< SORTED, NOT UNIQUE >-
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    ms.erase(1);  // all 1's erased

    int cnt = ms.count(1); // returns number of ones.

// only a single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1)+2);
} // rest all functions are same as set.