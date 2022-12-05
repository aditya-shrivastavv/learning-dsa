#include <iostream>
using namespace std;

int main() {
    char name[20];
    cout << "enter your name: "; cin >> name; // adds a null character automatically at the end (/0)
    cout << "hello "<< name; // prints characters one by one till /0 is reached.

    return 0; 
}