#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "enter n: "; cin >> n;

    if ( n < 0 )
    {
        n = n * (-1); // making the number positive.

        int ans = 0;
        int i = 0;

        while ( n != 0 )
        {
            int bit = n & 1;
            ans = (bit * pow(10,i) ) + ans;
            n = n >> 1;
            i++;
        }

        int newAns = (~ans); // taking 2's compliment
        // newAns = newAns + 1; // 2's = (1's + 1)

        cout << newAns <<endl;
    }
    else 
    {
        float ans = 0;
        int i = 0;

        while ( n != 0 )
        {
            int bit = n & 1;
            ans = (bit * pow(10,i) ) + ans;
            n = n >> 1;
            i++;
        }

        cout << ans <<endl;
    }

    return 0;

    
}
// https://stackoverflow.com/questions/72098376/i-wrote-a-program-to-convert-a-negative-number-to-binary-is-this-code-correct
// https://www.youtube.com/watch?v=bWrsk0QizEk&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=7&t=1282s