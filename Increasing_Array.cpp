#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  long long count = 0;
  vector<long long> v;
  for (int i = 0; i < n; i++)
  {
    int b;
    cin >> b;
    v.push_back(b);
  }
  for (int i = 1; i < n; i++)
  {
    if (v[i] < v[i - 1])
    {
      count += v[i - 1] - v[i];
      v[i] = v[i - 1];
    }
  }
  cout << count;
  return 0;
}
