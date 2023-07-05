#include <iostream>
using namespace std;
int main()
{
  long n;
  cin >> n;
  cout << "\n"
       << n << "\t";
  while (n != 1)
  {
    if (n % 2 == 0)
    {
      n = n / 2;
      cout << n << "\t";
    }
    else
    {
      n = n * 3 + 1;
      cout << n << "\t";
    }
  }
  return 0;
}