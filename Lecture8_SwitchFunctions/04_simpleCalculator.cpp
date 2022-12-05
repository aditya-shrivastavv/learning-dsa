#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter Two numbers : ";
    cin >> a >> b;

    char oper;
    cout << "Select the operation You want to do : ";
    cin >> oper;

    switch (oper)
    {
        case '+':
            cout << a <<" + "<< b <<" = "<< a+b <<endl;
            break;
        case '-':
            cout << a <<" - "<< b <<" = "<< a-b <<endl;
            break;
        case '*':
            cout << a <<" x "<< b <<" = "<< a*b <<endl;
            break;
        case '/':
            cout << a <<" / "<< b <<" = "<< a/b <<endl;
            break;
        case '%':
            cout << a <<" % "<< b <<" = "<< a%b <<endl;
            break;
        default : cout <<"Please enter these operation only (+,-,*,/,%)";
    }
    return 0;
}