#include <bits/stdc++.h>
#define M 1000000007;
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
vector<string> grayCode(int n)
{
  vector<string> res;
  if (n == 1)
  { // Base Case
    res.push_back("0");
    res.push_back("1");
    return res;
  }
  vector<string> prev = grayCode(n - 1); // Generate present using previous
  int n1 = prev.size();
  for (int i = 0; i < n1; i++)
  {
    res.push_back("0" + prev[i]);
  }
  for (int i = n1 - 1; i >= 0; i--)
  {
    res.push_back("1" + prev[i]);
  }
  return res;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  vector<string> ans;
  ans = grayCode(n);
  for (auto it : ans)
  {
    cout << it << "\n";
  }
  return 0;
}