#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int c = 1;
  int counter = 1;
  string s;
  cin >> s;
  int n = s.length();
  for (int i = 1; i < n; i++)
  {
    if (s[i] == s[i - 1])
    {
      c++;
    }
    else
    {
      c = 1;
    }
    if (counter < c)
    {
      counter = c;
    }
  }
  cout << counter;
  return 0;
}