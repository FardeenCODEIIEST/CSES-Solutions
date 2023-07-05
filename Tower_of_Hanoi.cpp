#include <bits/stdc++.h>
// Log 10 base 2=3.32;
// 10^9==2^30
using namespace std;
long long highestPowerof2(long long N)
{
  // if N is a power of two simply return it
  if (!(N & (N - 1)))
    return N;
  // else set only the most significant bit
  else
    return 0x8000000000000000 >> (__builtin_clzll(N));
}
void TOH(int n, char a, char b, char c)
{
  if (n == 1)
  {
    cout << a << " " << c << "\n";
  }
  else
  {
    TOH(n - 1, a, c, b);
    cout << a << " " << c << "\n";
    TOH(n - 1, b, a, c);
  }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  cout << pow(2, n) - 1 << "\n";
  TOH(n, '1', '2', '3');
  return 0;
}