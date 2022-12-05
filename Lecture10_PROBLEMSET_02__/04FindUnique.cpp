/*
given an array which will only be of odd size. each element will get repeated and
due to it is odd sized 1 element will not get repeated. Find that element ? 
*/

//! this is a bruteforce method.
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
    int i=0;
    while (i < n) {
        int x = ar[i]; // har ek element ko uthake ,kitni bar aarha hai count karenge.
        int j=0;
        int count=0;
        while (j < n) {
            if (x == ar[j])
                count++;        //! count == 2 -> array me do bar hai.
            j++;                //! count == 1 -> array me ek hi bar hai.
        }
        if (count == 1)
            return ar[i];
        i++;
    }
}