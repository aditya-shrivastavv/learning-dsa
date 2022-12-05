#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n) {
    int i=0;
    while (i < n-1) {
        int j=0;
        bool swaps = false;
        while (j < n-i-1) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
                swaps = true;
            }
            j++;
        }
        i++;
        if (swaps == false) {
            break;
        }
    }
}

void printArray(int a[], int n) {
    int i=0;
    while (i < n) {
        cout << a[i] <<" ";
        i++;
    }
    cout <<endl;
}

int main() {
    int array[] = {7,98,4,18,3,57,9}, n = 7;
    printArray(array,n);

    BubbleSort(array,n);
    printArray(array,n); 

    return 0;
}