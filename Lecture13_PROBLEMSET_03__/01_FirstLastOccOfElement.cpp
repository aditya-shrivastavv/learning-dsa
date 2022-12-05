#include <iostream>
using namespace std;

int FirstOccurence(int arr[], int n, int key) {
    int start = 0, end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;               //? assumed not found.

    while (start <= end) {
        if (arr[mid] == key) {
            ans = mid;
            end = mid-1;            //? might first occur before.
        }
        else if (arr[mid] > key) {  //? search in left.
            end = mid-1;
        }
        else if (arr[mid] < key) {  //? search in right.
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int LastOccurence(int arr[], int n, int key) {
    int start = 0, end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;               

    while (start <= end) {
        if (arr[mid] == key) {
            ans = mid;
            start = mid+1;              //? just a change here.  
        }
        else if (arr[mid] > key) {  
            end = mid-1;
        }
        else if (arr[mid] < key) {  
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main() {
    int odd[11] = {1,2,3,3,3,3,3,3,3,3,5};

    cout <<"First Occurence of 3 is at index "<< FirstOccurence(odd,11,3) <<endl;
    cout <<"Last Occurence of 3 is at index "<< LastOccurence(odd,11,3) <<endl; 

    return 0;
}