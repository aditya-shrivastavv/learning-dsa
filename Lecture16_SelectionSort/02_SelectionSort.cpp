#include <iostream>
using namespace std;

void printArray(int a[], int n) {
    for (int i=0; i<n; i++) {
        cout << a[i] <<" ";
    }
    cout << endl;
}

void sort(int arr[], int n) {
    for (int i=0; i<n; i++) { //i<(n-1) can also be done.
        int min = arr[i];
        for (int j=i; j<n; j++) {
            if (arr[j] < min) {
                min = arr[j];
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main() {
    int array[] = {1,7,9,2,3,7,11,0} ,n = 8;
    printArray(array,n);

    sort(array,n);
    printArray(array,n);

    return 0;
}