//? break the total amount in 100rs, 50rs, 20rs, 1rs currency.
#include <iostream>
using namespace std;

int main()
{
    int amt;
    cout << "Enter the Amount : "; cin >> amt;

    int rs100,rs50,rs20,rs1;

    switch (1)
    {
        case 1: rs100 = amt/100;
            cout <<"No. of 100 rs = " << rs100 <<endl;
            amt %= 100;
        case 2: rs50 = amt/50;
            cout <<"No. of 50 rs = " << rs50 <<endl;
            amt %= 50;
        case 3: rs20 = amt/20;
            cout <<"No. of 20 rs = " << rs20 <<endl;
            amt %= 20;
        case 4: rs1 = amt/1;
            cout <<"No. of 1 rs = " << rs1 <<endl;
            amt %= 1;
    }
    return 0;
}