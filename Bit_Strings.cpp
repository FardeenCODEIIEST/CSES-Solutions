#include <bits/stdc++.h>
#define MOD 1000000007
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
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  long long n;
  cin >> n;
  long long ans = 1;
  // To control overflow we need to MOD the answer at every step
  for (int i = 1; i <= n; i++)
  {
    ans *= 2;
    ans %= MOD;
  }
  cout << ans;
  return 0;
}