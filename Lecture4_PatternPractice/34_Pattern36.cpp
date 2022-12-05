/*
version-2
(with spaces)
1 2 3 4 5
  2 3 4 5
    3 4 5
      4 5
        5

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
    while (j <= i-1)
    {
      cout << "  ";
      j++;
    }

    j = i;
    while (j <= n)
    {
      cout << j <<" ";
      j++;
    }
    cout <<endl;
    i++;
  }
    
  return 0;
}