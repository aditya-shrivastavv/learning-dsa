#include <iostream>
using namespace std;

int MountainPeak(int arr[], int n) {
    int start = 0, end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while (start <= end) {
        if (arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) {
            return arr[mid];
        }
        else if (arr[mid] < arr[mid+1]) {
            ans = arr[mid+1];
            start = mid+1;
        }
        else if (arr[mid] < arr[mid-1]) {
            ans = arr[mid-1];
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
} 

int main() {
    int array[5] = {1,2,7,9,2};

    int ans = MountainPeak(array,5);
    cout << ans <<endl;

    return 0;
} //? solved on my own 
//? #intuition#