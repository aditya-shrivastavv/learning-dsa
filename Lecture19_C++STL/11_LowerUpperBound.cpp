#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[] = {1,4,5,6,9,9},n=6;        // so that a number shows up
    auto ind1 = lower_bound (a,a+n,4); cout << (unsigned)ind1;  //will return an iterator pointing to loction of 4.
    auto ind2 = lower_bound (a,a+n,7); cout << (unsigned)ind2;  //will return an iterator pointing to loction of (first)9.
    auto ind3 = lower_bound (a,a+n,10); cout << (unsigned)ind3;  //will return an iterator pointing to loction of a.end().
// lower_bound is stl which returns the first occurence of element if it occurs. and if it doesn't it will point to the
// immediate next greater element (ex. ind2) 
    upper_bound() points to the +1 element to find ,like finding 4 it will point to 5.
    return 0;
}