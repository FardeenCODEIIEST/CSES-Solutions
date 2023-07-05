#include <bits/stdc++.h>
using namespace std;
long long max(long long a, long long b)
{
  return (a > b) ? a : b;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    long long y, x;
    cin >> y >> x;
    if (x ^ y)
    {
      if ((x & 1) && (y & 1))
      {
        long long c = max(x, y);
        if (c == x)
        {
          long long ans = c * c - c + 1 + (c - x) + (c - y);
          cout << ans << "\n";
        }
        else
        {
          long long ans = c * c - c + 1 - (c - x) - (c - y);
          cout << ans << "\n";
        }
      }
      else if (!(x & 1) && !(y & 1))
      {
        long long c = max(x, y);
        if (c == x)
        {
          long long ans = c * c - c + 1 - (c - x) - (c - y);
          cout << ans << "\n";
        }
        else
        {

          long long ans = c * c - c + 1 + (c - x) + (c - y);
          cout << ans << "\n";
        }
      }
      else if ((y & 1) && !(x & 1))
      {
        long long c = max(x, y);
        long long ans = c * c - c + 1 - (c - x) - (c - y);
        cout << ans << "\n";
      }
      else
      {
        long long c = max(x, y);
        long long ans = c * c - c + 1 + (c - x) + (c - y);
        cout << ans << "\n";
      }
    }
    else
    {
      cout << x * x - x + 1 << "\n";
    }
  }
  return 0;
}
