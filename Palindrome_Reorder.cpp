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
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  string s;
  cin >> s;
  int n = s.size();
  vector<int> count(26, 0);
  for (int i = 0; i < n; i++)
  {
    count[s[i] - 'A']++;
  }
  int odd = 0;
  for (int i = 0; i < 26; i++)
  {
    if (odd > 1)
    {
      cout << "NO SOLUTION\n";
      return 0;
    }
    if (count[i] & 1)
    {
      odd++;
    }
  }
  vector<char> ev;
  vector<char> od;
  for (int i = 0; i < 26; i++)
  {
    if (count[i] & 1)
    {
      int num = count[i] / 2;
      for (int k = 0; k < num; k++)
      {
        ev.push_back('A' + i);
      }
      od.push_back('A' + i);
    }
    else if (count[i] && count[i] % 2 == 0)
    {
      int num = count[i] / 2;
      for (int k = 0; k < num; k++)
      {
        ev.push_back('A' + i);
      }
    }
  }
  for (int i = 0; i < ev.size(); i++)
  {
    cout << ev[i];
  }
  for (int i = 0; i < od.size(); i++)
  {
    cout << od[i];
  }
  for (int i = ev.size() - 1; i >= 0; i--)
  {
    cout << ev[i];
  }
  return 0;
}
