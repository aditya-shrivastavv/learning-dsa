#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"enter n: "; cin >> n;

    while (true)
    {
        switch (n)
        {
            case 1: cout << "case 1" <<endl;
                continue;
            case 2: cout << "case 2" <<endl;
                break;
            default : cout << "default" <<endl;
        }
        exit(0);
    }
    return 0;
}
// ! there is no other way to get out of the switch inside infinte loop 
// * we have to use the exit function.