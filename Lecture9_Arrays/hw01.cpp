/*
1. take integer inputs from the user.  
2. store it in the array
3. give the sum of elements as output.
*/
#include <iostream>
using namespace std;

void SumofElements(int arr[], int n) {
    int sum=0;
    for (int i=0; i<n ; i++) {
        sum += arr[i];
    }
    cout <<"sum = "<< sum <<endl;
}

int main() {
    int n;
    cout << "enter the size : "; cin >> n;

    cout <<"enter the elements: ";
    int arr[100];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    SumofElements(arr,n);
    
    return 0;
}