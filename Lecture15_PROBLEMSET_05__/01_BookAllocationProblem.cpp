#include <iostream>
using namespace std;

bool isPossible (int arr[], int n, int m, int mid) {
    int studentCount = 1, pageSum = 0;
    for (int i=0; i<n; i++) {
        if (pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else {
            studentCount++;
            if (studentCount > m || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int main() {
    int array[4] = {10,20,30,40};
    int n = 4, m = 2; 

    int start = 0, end;
    int sum = 0;

    for (int i=0; i<n; i++) {
        sum += array[i];
    }
    end = sum;
    int mid = start + (end-mid)/2;

    int answer = -1;
    while (start <= end) {
        if (isPossible(array,n,m,mid)) {
            answer = mid;
            end = mid-1;
        }
        else {
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    cout << answer <<endl;
    return 0;
}