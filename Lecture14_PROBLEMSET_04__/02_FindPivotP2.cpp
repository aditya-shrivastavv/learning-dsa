//? version 2: ham change me second wale ko pivot maan rahe hai.
#include <iostream>
using namespace std;

int pivot(int arr[], int n) {
    int start = 0, end = n-1;
    int mid = start + (end-start)/2;
    while (start <= end) {
        if (arr[mid] < arr[mid-1]) {
            return arr[mid];
        }
        else if (arr[mid] > arr[0]) {
            start = mid;
        }
        else {
            end = mid;
        }
        mid = start + (end-start)/2;
    }
}

int main() {
    int array[] = {10,2,4,7,8,10,11};

    cout << pivot(array,7) <<endl;

    return 0;
}