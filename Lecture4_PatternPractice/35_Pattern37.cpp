/*
version-1
(without spaces)
   1
  23
 456
78910

*/
#include <iostream>
using namespace std;

int main()
{
   int n;
   cout << "enter n: "; cin >> n;

   int i = 1;
   int count = 1; 

   while (i <= n)
   {
      int j = 1; 
      while (j <= n-i)
      {
         cout << " ";
         j++;
      }

      j = 1; 
      while (j <= i)
      {
         cout << count;
         j++;
         count++;
      }
      cout <<endl;
      i++;

   }

   return 0;
   
}