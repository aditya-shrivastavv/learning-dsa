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
//need to understand it more deeply.
double sqrtPrecise(int n, int precision, int Answer_NoDecimal) {
    double factor = 1;
    double answer = Answer_NoDecimal;

    for (int i=0; i<precision; i++) {
        factor = factor/10;

        for (double j=answer; j*j<n; j=j+factor) {
            answer = j;
        }
    }
    return answer;
}

int main() {
    int n;
    cout <<"enter n: "; cin >> n;

    int answerNoDeci = sqrt(n);
    cout << answerNoDeci <<endl;

    double answerWithDeci = sqrtPrecise(n,3,answerNoDeci);
    cout << answerWithDeci <<endl;

    return 0;
}
