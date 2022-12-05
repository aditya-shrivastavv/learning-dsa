#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
//sorting
    sort(a,a+n);
    sort(v.begin(),v.end());

    sort(a+2,a+4);

    sort(a,a+n,greater<int>);   //! decending order.

    pair<int,int> a[] = {{1,2},{2,1},{4,1}};
// sort it according to second element
// if second element is same , then sort
// it according to first element but in decending.
    bool compare(pain<int,int> p1, pair<int,int> p2) {
        if (p1.second < p2.second) {    //! are in correct order.
            return true;
        }
        else if (p1.second == p2.second) {
            if (p1.first > p2.second) {
                return true;  
            }
        }
        return false;
    }    
    sort(a,a+n,compare); //? a self written comparator
        // {{4,1},{2,1},{1,2}}    
}