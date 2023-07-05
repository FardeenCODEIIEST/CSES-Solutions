#include <bits/stdc++.h>
// Log 10 base 2=3.32;
// 10^9==2^30
// HARD
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
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  long long sum = n * (n + 1) / 2;
  if (sum & 1)
  {
    cout << "NO\n";
  }
  else
  {
    cout << "YES\n";
    if (n & 1)
    {
      cout << n / 2 + 1 << "\n";
      int s1 = 1, e1 = n - 1; // Ignoring the last term for pairing purposes
      while (s1 < e1)
      {
        cout << s1 << " " << e1 << " ";
        s1 += 2;
        e1 -= 2;
      }
      cout << "\n"
           << n / 2 << "\n";
      int s2 = 2, e2 = n - 2;
      while (s2 < e2)
      {
        cout << s2 << " " << e2 << " ";
        s2 += 2;
        e2 -= 2;
      }
      cout << n << "\n";
    }
    else
    {
      cout << n / 2 << "\n";
      int s3 = 1, e3 = n;
      while (s3 < e3)
      {
        cout << s3 << " " << e3 << " ";
        s3 += 2;
        e3 -= 2;
      }
      cout << "\n"
           << n / 2 << "\n";
      int s4 = 2, e4 = n - 1;
      while (s4 < e4)
      {
        cout << s4 << " " << e4 << " ";
        s4 += 2;
        e4 -= 2;
      }
    }
  }
  return 0;
}