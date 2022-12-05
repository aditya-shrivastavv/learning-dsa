#include <iostream>
using namespace std;

void MaxMin(int a[],int size);

int main()
{
    int size; 
    cout <<"enter size :"; cin >> size;

    int array[100];

    cout <<"enter elements :";
    for (int i=0; i<size; i++)
    {
        cin >> array[i];
    }

    MaxMin(array,size);

    return 0;
}

void MaxMin(int a[],int size)
{
    int i=0;
    int max = INT32_MIN, min = INT32_MAX;
    while (i < size)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
        i++;
    }
    cout <<"MAX value is = "<< max <<endl;
    cout <<"MIN value is = "<< min <<endl;
}