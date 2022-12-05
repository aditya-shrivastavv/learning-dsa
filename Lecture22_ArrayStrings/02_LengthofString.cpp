#include <iostream>
#include <string>
using namespace std;

int main() {
    char st[50];
    cout << "Enter any String: "; cin >> st;

    int i=0;
    for (i; st[i]!='\0'; i++) {}
    cout <<"Length = "<< i <<endl;

    return 0;
}
