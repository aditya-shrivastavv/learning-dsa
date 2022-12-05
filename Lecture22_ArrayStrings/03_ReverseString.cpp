#include <iostream>
using namespace std;

int getLength(char c[]) {
    int count = 0;
    for (int i=0; c[i]!='\0'; i++) {
        count++;
    }
    return count;
}
    
void ReverseString(char str[], int length) {
    for (int i=0; i < length/2; i++) {
        swap(str[i],str[length-i-1]);
    }
}

int main() {
    char ch[50]; 
    cout <<"enter any string: "; cin >> ch;

    cout << ch <<endl;

    int length = getLength(ch);
    
    ReverseString(ch, length);

    cout << ch <<endl;

    return 0;
}
// can also be done with end/start method.