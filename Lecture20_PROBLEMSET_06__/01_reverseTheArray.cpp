#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printer(vector<int> p) {
    for (int i=0; i<p.size(); i++) {
        cout << p[i] << " ";
    }
}

vector<int> reverse(vector<int> a) {
    int start = 0, end = a.size()-1;    //becz size returns the number of elements.
    while (start <= end) {
        swap(a[start],a[end]);
        start++,end--;
    }
    cout << endl;
    return a;
}

int main() {
    vector<int> arr;
    arr.push_back(4);
    arr.push_back(9);
    arr.push_back(14);
    arr.push_back(20);
    arr.push_back(34);

    printer(arr);

    vector<int> ans = reverse(arr);

    printer(ans);

    return 0;
}