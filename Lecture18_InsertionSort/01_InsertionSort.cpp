#include<iostream>
using namespace std;

insertionSort(int arr[], int n) {
    int i=1;
    while (i < n) {
        int temp = arr[i];
        int j= i-1;
        while (j >= 0) {
            if (arr[j] > temp) {
                arr[j+1] = arr[j];
            }
            else {
                break;
            }
            j--;
        }
        arr[j+1] = temp;
        i++;
    }

}

printArray(int a[],int n) {
    for (int i=0; i<n; i++) {
        cout << a[i] <<" ";
    }
    cout <<endl;
}

int main() {
    int array[] = {48,9,4,19,6,51,5,26} , n = 8;
    printArray(array,n);

    insertionSort(array,n);
    printArray(array,n);

    return 0;
}