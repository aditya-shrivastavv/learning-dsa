#include <iostream>
using namespace std;

void hello(int arr[],int n)
{
    cout <<"inside the function"<<endl;

    arr[0] = 99; //updating the value;

    for (int i=0; i<n; i++)
    {
        cout << arr[i] <<" ";
    }
    cout << endl <<"leaving the function"<<endl;
}

int main() {
    int arr[4] = {5,6,7,8};
    int n=4;
    hello(arr,n);

    cout <<"in the main function" <<endl;
    for (int i=0; i<n; i++)
    {
        cout << arr[i] <<" ";
    }

    return 0;
}

//! we see that the value updated in hello() is being reflected in main().
//? why is that so ?
//? why arr[0] changed in main() ?

//* there is one special thing about array name i.e. it stores the memory address of the starting
//* block of the full array .
//* so when we are calling the function we are passing the starting address of that array.
//! here call be value is not happening , call be refrence is happening.