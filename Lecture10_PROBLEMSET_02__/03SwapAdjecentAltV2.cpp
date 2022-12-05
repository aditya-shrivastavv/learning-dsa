#include <iostream>
using namespace std;

void SwapAdjAlternate(int arr[], int size) {
    for (int i=0; i<size; i+=2) {
        if (i+1 < size) {
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArray(int arr[], int n) {
    int i=0;
    while (i < n) {
        cout << arr[i] <<" ";
        i++;
    }
}

int main() {
    int ar[100];
    int size;
    cout <<"enter size : "; cin >> size;
    cout <<"enter the elements : ";
    for (int i=0; i<size ; i++) {
        cin >> ar[i];
    }

    cout << "initially" <<endl;
    printArray(ar,size); cout <<endl;

    SwapAdjAlternate(ar,size);
    cout << "after swapping" <<endl;
    printArray(ar,size);

    return 0;
}