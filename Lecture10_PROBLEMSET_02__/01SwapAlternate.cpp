/*
given an array swap it's alternate elements from both sides. 
*/
#include <iostream>
using namespace std;

void swapAlternate(int array[], int n);
void printArray(int arr[], int n);

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
    swapAlternate(ar,size);
    cout << "after swapping" <<endl;
    printArray(ar,size);
}

void swapAlternate(int array[], int n) { 
    int i=0;
    while (i < n/2) {
        int temp = array[i];
        array[i] = array[n-i-1];
        array[n-i-1] = temp;
        i += 2;
    }
}
void printArray(int arr[], int n) {
    int i=0;
    while (i < n) {
        cout << arr[i] <<" ";
        i++;
    }
}
//* done...
