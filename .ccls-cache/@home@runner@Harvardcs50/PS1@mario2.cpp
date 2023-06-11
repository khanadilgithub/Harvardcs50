#include <iostream>
using namespace std;
void mario2()
{
  int n = 0;
  do 
  {
    cin >> n;
  } while (n > 10);
  
  for (int i = 1; i <= n; i++) 
  {

    for (int k = n; k >= 0; k--)
      {
      if (k < i)
        cout << "#";
      else
        cout << " ";
      }
    cout << endl;
  }
}