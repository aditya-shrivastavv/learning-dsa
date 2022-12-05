//? version 1: ham change me first wale ko pivot maan rahe hai.
#include <iostream>
using namespace std;

int pivot(int arr[], int n) {
    int start = 0, end = n-1;
    int mid = start + (end-start)/2;
    while (start <= end) {
        if (arr[mid] >= arr[mid+1]) {
            return arr[mid];        //! Pivot mil gya.
        }
        else if (arr[mid] > arr[0]) { //! iska matlab mid sec1 me hai.
            start = mid;              //! pivot aage hai.
        }
        else {                  //! mid sec2 me hai.
            end = mid;          //! pivot piche rehe gya.
        }
        mid = start + (end-start)/2;
    }
}

int main() {
    int array[] = {10,14,4,7,8,10,11};

    cout << pivot(array,7) <<endl;

    return 0;
}