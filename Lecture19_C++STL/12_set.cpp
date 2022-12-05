#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s; // -< EVERYTHING IN SORTED ORDER, UNIQUE ELEMENTS >- 
    s.insert(1);    // {1}    
    s.emplace(2);   // {1,2}
    s.insert(2);    // {1,2}
    s.insert(4);    // {1,2,4}
    s.insert(3);    // {1,2,3,4}

// functionalitys of insert in vector can be
// used also, that only increase efficiency.

// begin(), end(), rbegin(), rend(), rsize(),
// empty(), and swap() are same as those of above.

    // let s = {7,8,9,10,11}
    auto it = s.find(9);    // returns an iterator which points to the memory location of 9
    auto it = s.find(14); // if element not present ,will return s.end()

    s.erase(8);     // {7,9,10,11}

    auto i = s.find(7);
    s.erase(i);     // takes constant time.

    auto i1 = s.find(8);
    auto i2 = s.find(11);
    s.erase(i1,i2); // 8 -> 11 (removed) 11 exclusive.

// lower_bound and upper_bound function works the same way as it works in vector.

    auto i3 = s.lower_bound(2);
    auto i3 = s.lower_bound(3);
}
//! It's not a linear data structure ,data is stored in form of a tree.
//? everything happens in O(log n) time complexity.