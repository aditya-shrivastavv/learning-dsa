#include <iostream>
using namespace std;

int addArray(int a1, int n1, int a2, int n2) {
    int i=n1, j=n2;
    int carry = 0;
    while (i>=0 && j>=0) {
        int temp = a1[i] + a2[i] + carry;
        carry = temp / 10;
        temp = temp % 10;
    }
}

int main() {
    int a1[] = {7,6,1};
    int a2[] = {8,0};
    int sum = addArray(a1,n1,a2,n2);

    return 0;
}