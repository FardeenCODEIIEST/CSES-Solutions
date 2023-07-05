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
/*
  Just remember that STL is too strong next_premutaion and
  prev_permutaion will solve this easily
*/
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  vector<string> ans;
  ans.push_back(s);
  while (next_permutation(s.begin(), s.end()))
  {
    ans.push_back(s);
  }
  cout << ans.size() << "\n";
  for (auto it : ans)
  {
    cout << it << "\n";
  }
  return 0;
}