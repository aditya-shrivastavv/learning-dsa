#include <iostream>
using namespace std;

void rotateArray(int arr[], int n) {
    int k;
    cout <<"Enter Distance of Rotation: "; cin >> k;
    int a[n];
    for (int i=0; i<n; i++) {
        a[(i+k)%n] = arr[i];
    }
    //print
    for (int i=0; i<n; i++) {
        cout << a[i] <<" "; 
    }
    cout << endl;
    
}

void printer(int arr[], int n) {
    for (int i=0; i<n; i++) {
        cout << arr[i] <<" "; 
    }
    cout << endl;
}

int main() {
    int a[] = {1,2,3,4,5,6,7,8};
    
    printer(a,8);
    
    rotateArray(a,8);

    return 0;
}