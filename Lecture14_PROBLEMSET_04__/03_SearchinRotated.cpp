//! APPROACH 1 !

// 1. find pivot.
// 2. binary search in the respective section. 
#include <iostream>
using namespace std;

int Pivot(int arr[], int n) {
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    while (s < e) {
        if (arr[mid] <= arr[0]) {
            s = mid+1;      //! pivot aage hai.
        }
        else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;           //return e also valid as s=e;
}
int BinarySearch(int arr[], int start, int end, int key) {
    int mid = start + (end-start)/2;
    while (start <= end) {
        if (arr[mid] == key) {
            return mid;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main()
{
    int array[] = {17,20,28,40,2,5,8};
    int n = 7,key = 5;
    int pivot = Pivot(array,n);
    if (key >= array[pivot] && key <= array[n-1]) {
        cout << BinarySearch(array,pivot,n-1,key);
    }
    else {
        cout << BinarySearch(array,0,pivot-1,key);
    }
}