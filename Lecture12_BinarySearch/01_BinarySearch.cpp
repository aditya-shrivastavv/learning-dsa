//? this one we are making for array with elements in ascending order. 

#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key);

int main() {
    int even[6] = {3,4,9,11,16,28};
    int odd[5] = {6,15,27,36,40}; 

    int evenindex = BinarySearch(even,6,28);        //! ham index print karwaenge.
    cout <<"Index of 28 is = "<< evenindex <<endl;

    int oddindex = BinarySearch(odd,5,15);        //! ham index print karwaenge.
    cout <<"Index of 15 is = "<< oddindex <<endl;

    int noindex = BinarySearch(odd,5,100);        //? element exist hi nhi karta
    cout <<"Index of 100 is = "<< noindex <<endl; //! toh -1 return hoga.

    return 0;
}

int BinarySearch(int arr[], int size, int key) {
    int start = 0, end = size-1;
    int mid = start + (end-start)/2;

    while (start <= end) {          //! start end ke left me hona chahiye har bar.
        if (arr[mid] == key) {
            return mid;
        }
        if (key > arr[mid]) {       //! hamko right wale part me jana hai. 
            start = mid+1;
        }
        else {                      //! hamko left wale part me jana hai.
            end = mid-1;
        }
        mid = start + (end-start)/2;      //! mid ko update kar diya.
    }
    return -1;
}