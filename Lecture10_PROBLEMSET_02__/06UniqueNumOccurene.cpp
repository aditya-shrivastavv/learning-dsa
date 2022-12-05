#include <iostream>
using namespace std;

printArray(int a[], int n) 
{
    int i=0;
    while (i < n)
    {
        cout << a[i] <<" ";
        i++; 
    }
    cout << endl;
}

UniqueElementCounter(int a[], int n) 
{
    int i=0;
    while (i < n)
    {
        
    }
}

    // cout <<"yaha tak thik ba !";
UniqueOcc(int a[], int n)
{   

}

int main()
{
    int n;
    cout <<"enter size : "; cin >> n;

    int array[100];
    cout <<"enter elements : ";
    int i=0;
    while (i < n)
    {
        cin >> array[i];
        i++;
    }

    printArray(array,n);
    UniqueOcc(array,n);

    return 0;
}