//? Tell whether 3 is present in the array or not ?

#include <iostream>
using namespace std;

bool SearchArray(int arr[],int n, int num) {
    for (int i=0; i<n ; i++) {
        if (num == arr[i]) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[10] = {6,8,45,16,48,4,65,16,3,60};
    int num;
    cout <<"enter num to search: "; cin >> num;
    cout << SearchArray(arr,10,num);
    return 0;
}