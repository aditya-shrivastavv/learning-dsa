/*
Swap adjecent alternate elements of an array.
*/
#include <iostream>
using namespace std;

void printArray(int arr[], int n);
void swapAdjAlternate(int array[], int n);

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

    swapAdjAlternate(ar,size);
    cout << "after swapping" <<endl;
    printArray(ar,size);

    return 0;
}

void printArray(int arr[], int n) {
    int i=0;
    while (i < n) {
        cout << arr[i] <<" ";
        i++;
    }
}

void swapAdjAlternate(int array[], int n) {
    int i=0;
    while (i < n) {
        if (i+1 >= n) {
            break;
        }
        int temp = array[i];
        array[i] = array[i+1];
        array[i+1] = temp;
        i += 2;
    }
}
//* done...