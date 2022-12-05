#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
//size of a simple array cannot be modified once declared, vector helps us with that.
//*vector is dynamic in nature.
    vector<int> v1;             // {} empty container.
    v1.push_back(1);             // {1}
    v1.emplace_back(3);          // {1,3}

    vector<pair<int,int>> v2;   // {{}}
    v2.push_back({2,3});        // {{2,3}}
    v2.emplace_back(6,7);       // {{6,7}}

    vector<int> v3(5);          // {_,_,_,_,_}; expandable also.
    
    vector<int> v4(4,90);       // {90,90,90,90}
    vector<int> v5(v4);         // v4 copied to v5.

    return 0;
}


//? why emplace_back is faster than push_back ?
/*
because emplace_back would construct the object immediately in the vector, 
while push_back , would first construct an anonymous object and then would copy 
it to the vector.
*/