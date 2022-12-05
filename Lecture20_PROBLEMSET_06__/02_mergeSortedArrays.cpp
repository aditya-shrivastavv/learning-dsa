#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printer(int arr[],int size) {
    for (int i=0; i<size ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void mergeSorted(int arr1[], int n, int arr2[], int m, int arr[]) {
    int i=0, j=0;
    int k=0;
    while ( i<n && j<m ) {
        if (arr1[i] < arr2[j]) 
            arr[k++] = arr1[i++];
        else 
            arr[k++] = arr2[j++];
    }
    while (i<n) 
        arr[k++] = arr1[i++];
    while (j<m)
        arr[k++] = arr2[j++];
}

int main() {
    int arr1[5] = {1,3,5,7,9}; 
    int arr2[3] = {2,4,6}; 

    int arr[8];

    mergeSorted(arr1, 5, arr2, 3, arr);
    printer(arr,8);

    return 0;
}