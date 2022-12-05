#include <iostream>
using namespace std;

void moveZeros(int arr[],int n) {
    int i=0, j=0;
    while (i<n) {
        if (arr[i] != 0) {
            swap(arr[i],arr[j]);
            j++;
        }
        i++;
    }
}

void printer(int arr[],int size) {
    for (int i=0; i<size ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[] = {0,1,0,3,12,0};
    moveZeros(a,6);
    printer(a,6);
    return 0;
}