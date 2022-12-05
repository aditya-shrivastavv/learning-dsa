#include <iostream>
using namespace std;

int FindDuplicate(vector <int> &arr)
{
    int ans=0;
    for (int i=0; i < a.size(); i++) {
        ans=ans^a[i];  //? array ke sare elements ko xor kar liya.
    }
    for (int i=0; i < a.size(); i++) {
        ans=ans^i;     //? fir usko 1 to n-1 ke numbers se xor kar liya. 
    }
    return ans;
}

int main()
{
    int n;
    cout <<"enter size: "; cin >> n;

    int arr[100];
    cout <<"enter the elements: ";
    int i=0;
    while (i < n) 
    {
        cin >> array[i];
        i++;
    }
    cout <<"duplicate element = "<< FindDuplicate(arr);

    return 0;
}