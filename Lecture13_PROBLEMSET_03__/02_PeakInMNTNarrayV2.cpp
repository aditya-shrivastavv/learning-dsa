// some compiler problem in this one, v1 is better.
#include <iostream>
using namespace std;

int MountainPeak(int arr[], int n) {
    int start = 0, end = n-1;
    int mid = start + (end-start)/2;
    while (start < end) {
        if (arr[mid] < arr[mid+1]) {
            start = mid+1;
        }
        else {
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
} 

int main() {
    int array[5] = {1,9,7,6,2};

    int ans = MountainPeak(array,5);
    cout << ans <<endl;

    return 0;
}