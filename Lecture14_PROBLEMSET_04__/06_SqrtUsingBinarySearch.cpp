#include <iostream>
using namespace std;

int sqrt(int n) {
    int start = 1, end = n;
    long long int mid = start + (end-start)/2; //* so that mid*mid don't cross integer limits

    while (start <= end) {
        if (mid*mid <= n) {
            if ((mid+1)*(mid+1) > n) {
                return mid;
            }
            start = mid+1;
        }
        else {
            end = mid;
        }
        mid = start + (end-start)/2;
    }
}

int main() {
    int n;
    cout <<"enter n: "; cin >> n;

    int answer = sqrt(n);
    cout << answer <<endl;
}
//! made in first attempt 
//? #iamawesome