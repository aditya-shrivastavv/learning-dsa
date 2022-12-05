#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    //can be any datatype
    pair<int,int> p = {4,9};
    cout << p.first <<" "<< p.second <<endl;

    //nested pair
    pair<int, pair<int,int>> p1 = {1,{7,4}};
    cout << p1.first <<" "<< p1.second.first <<" "<<p1.second.second <<endl;

    //pair array     index   0     1     2   //
    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
    cout << arr[1].second <<" "<<arr[2].first <<endl;

    return 0;
}
