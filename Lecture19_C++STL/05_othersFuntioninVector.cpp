#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
// erase
    vector<int> v = {9,54,6,62,8};
    v.erase(v.begin()+1);   // 54 deleted
    v.erase(v.begin()+2,v.begin()+4);   // 6 -> 8 (range) deleted 8 exlusive.
    
// insert
    vector<int> vv(3,100);      // {100,100,100}
    vv.insert(vv.begin(),200);  // {200,100,100,100}
    vv.insert(vv.begin()+1,2,30);   // {200,30,30,100,100,100}

    vector<int> copy(2,50);     // {50,50} 
    vv.insert(vv.begin(),copy.begin(),copy.end());   // {50,50,200,30,30,100,100,100}

// other
    cout << vv.size();  //  -> 8
    vv.pop_back();      // {50,50,200,30,30,100,100} last element poped(deleted/removed).
    v.swap(vv);     //all elements of the two vectors are swaped.
    vv.clear();     // erase the entire array.
    vv.empty();     // tells whether the array is empty or not.
    
    return 0;
}