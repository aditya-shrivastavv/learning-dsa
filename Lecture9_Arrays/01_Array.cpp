/*
1. Similar types of datas are stored in Array.
2. All Values of array are stored in contigious memory locations.
    ex. | 3|49|36| 2|97|19| 
*/
#include <iostream>
using namespace std;

int main() {
    int dost[10]; //* declaration without initialization.
    int number[3] = {22,87,6}; //* declaration with initialization.
    int array[100000] = {0}; //* 0 will be stored on all the locations, or empty {} will do the same.
    int num[100000] = {1}; //* (1 or any) will not be stored on all the locations, only at num[0].
//? so how to initialize entire array with a single value.
    int array1[100] = {[0...99] = 3}; //* works only with gcc compilers.
    int array2[50];
    fill_n(array2,50,5); //* 5 will be stored on all locations.
}
//! if number of values stored in array is less than the size of array,
//! then the left over memory locations will be fill with 0 automatically,