#include <bits/stdc++.h>
#define M 1000000007;
// Log 10 base 2=3.32;
// 10^9==2^30
using namespace std;
struct complex
{
  int r;
  int i;
} complex;
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
  stack<complex> s1;

  return 0;
}