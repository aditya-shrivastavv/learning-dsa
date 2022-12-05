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
    int maximum = INT32_MIN, minimum = INT32_MAX;
    while (i < size)
    {
        maximum = max(maximum,a[i]);
        minimum = min(minimum,a[i]);
        i++;
    }
    cout <<"MAX value is = "<< maximum <<endl;
    cout <<"MIN value is = "<< minimum <<endl;
}