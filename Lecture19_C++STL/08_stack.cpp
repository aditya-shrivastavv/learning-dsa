#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;      //  -< LAST IN FIRST OUT >-
    st.push(1); // {1}    
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(3); // {3,3,2,1}
    st.emplace(5); // {5,3,3,2,1}   

    cout << st.top();   // 5 // any type of indexing is not there.

    st.pop();       // 5 will be removed

    cout << st.top();   // 3
    cout << st.size();  // 4 (5 removed)
    cout << st.empty(); // 0 (not empty)

    stack<int> st1,st2;
    st1.swap(st2);
} 
//! all the operations (push,pop,top) are O(1).