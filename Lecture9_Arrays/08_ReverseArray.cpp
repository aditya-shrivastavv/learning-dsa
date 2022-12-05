#include <iostream>
using namespace std;

void reverseArray(int array[],int n) {
    for (int i=0; i<n/2; i++) {
        int x = array[i];
        array[i] = array[n-i-1];
        array[n-i-1] = x;
    }
}
void printArray(int array[],int n) {
    for (int i=0; i<n; i++) {
        cout << array[i] <<" ";
    } cout <<endl;
}

int main() {
    int arr[6] = {11,12,13,14,15,16};
    int brr[5] = {2,3,4,5,6};
    int na=6;
    int nb=5;

    cout <<"reversed arr" <<endl;
    reverseArray(arr,na);
    printArray(arr,na);

    cout <<"reversed brr" <<endl;
    reverseArray(brr,nb);
    printArray(brr,nb);

    return 0;
}
