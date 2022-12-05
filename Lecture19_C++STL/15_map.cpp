#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {    //! -< MAP STORES UNIQUE KEYS IN SORTED ORDER. >-
    map<int,int> m;                 // <key,value>
    map<int,pair<int,int>> mp;  // <key<value,value>>
    map<pair<int,int>,int> mpp; // <<key,key>value>>

    mpp[1] = 2; // {1,2} 1 is the key mapped to 2;
    mpp.emplace({3,1}); // similar.
    mpp.insert({2,4});  // similar.
    mpp[{2,3}] = 10;  // FOR 3RD. 2 keys for 1 value.

    for (auto it: mpp) {
        cout << it.first <<" "<< it.second << endl;
    }   // {{1,2},{2,4},{3,1}}

    cout << mpp[1]; // 2 is at one
    cout << mpp[5]; // no value for the key 5.

    auto it = mpp.find(3);  // {3,1}.second = 1
    cout << *(it).second;

    auto it = mpp.find(5);  // ! mpp.end()

    auto it = mpp.lower_bound(2);
    auto it = mpp.lower_bound(3);
// erase ,swap ,size, empty are same as above.
}
//? in map datastructure each element is associated with a unique key.
//! the elements might be duplicate.
//* the key can be of any datatype.