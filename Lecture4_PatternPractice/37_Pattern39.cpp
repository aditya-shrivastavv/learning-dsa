/*
version-1
method-1
(without spaces)
   1
  121
 12321
1234321

*/
#include <iostream>
using namespace std;

int main()
{
   int n;
   cout << "enter n: "; cin >> n;

   int i = 1;
   while (i <= n)
   {
      int j = 1;
//printing spaces
      while (j <= n-i)
      {
         cout << " ";
         j++;
      }

      j = 1;

//printing triangle 1
      while (j <= i)
      {
         cout << j;
         j++;
      }
      j = j - 2;

      int c = 1;
      
//printing triangle 2
      while (c <= i-1)
      {
         cout << j;
         c++;
         j--;
      }

      cout << endl;
      i++;

   }

   return 0;
}