#include <iostream>
using namespace std;

void printArray(int a[],int size); //size required

int main()
{
    int arr[] = {6,45,15,35,8,15,69,95};
    printArray(arr,8);

    char ch[5] = {'g','k','d','h','e'};
    
    return 0;
}

void printArray(int a[],int size)
{
    for (int i=0; i<size; i++)
    {
        cout << a[i] <<" ";
    }
}

