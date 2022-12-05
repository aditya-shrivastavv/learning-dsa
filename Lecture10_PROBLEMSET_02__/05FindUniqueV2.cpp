#include <iostream>
using namespace std;

int FindUnique(int ar[], int n);

int main() {
    int a[100];
    int size; 
    cout <<"enter size : "; cin >> size; //!odd size only

    cout <<"enter the elements : ";
    for (int i=0; i<size; i++) {
        cin >> a[i];
    }
    cout <<"unique element is " << FindUnique(a,size);

    return 0;
}

int FindUnique(int ar[], int n) {
    int ans = 0;
    for (int i=0; i<n; i++) {
        ans = ans^ar[i];
    }
    return ans;
}
// 4. ^
//     x   y   ^   z
//     0   0   ^   0
//     0   1   ^   1
//     1   0   ^   1
//     1   1   ^   0
//     2 ^ 4 : 010 + 100 = 110(6)
//     5 ^ 7 : 101 + 111 = 010(2)