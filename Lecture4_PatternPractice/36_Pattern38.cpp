/*
version-2
(with spaces)
      1
    2 3
  4 5 6
7 8 9 10

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
         cout << "  ";
         j++;
      }

      j = 1; 
      while (j <= i)
      {
         cout << count <<" ";
         j++;
         count++;
      }
      cout <<endl;
      i++;

   }

   return 0;
   
}