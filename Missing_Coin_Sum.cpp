#include <bits/stdc++.h>

using namespace std;

#define int long long int
#define F first
#define S second
#define pb push_back
#define si set<int>
#define vi vector<int>
#define pii pair<int, int>
#define vpi vector<pii>
#define vpp vector<pair<int, pii>>
#define mii map<int, int>
#define mpi map<pii, int>
#define spi set<pii>
#define sz(x) ((int)x.size())
#define all(p) p.begin(), p.end()
#define double long double
#define que_max priority_queue<int>
#define que_min priority_queue<int, vi, greater<int>>
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)
#define print(a)      \
  for (auto x : a)    \
    cout << x << " "; \
  cout << endl
#define print1(a)  \
  for (auto x : a) \
  cout << x.F << " " << x.S << endl
#define print2(a, x, y)       \
  for (int i = x; i < y; i++) \
    cout << a[i] << " ";      \
  cout << endl

inline int power(int a, int b)
{
  int x = 1;
  while (b)
  {
    if (b & 1)
      x *= a;
    a *= a;
    b >>= 1;
  }
  return x;
}

template <typename Arg1>
void __f(const char *name, Arg1 &&arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
  const char *comma = strchr(names + 1, ',');
  cout.write(names, comma - names) << " : " << arg1 << " | ";
  __f(comma + 1, args...);
}

const int N = 200005;

void solve()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  int ans = 1;
  /*
    Inductively think that for 0 to i-1 we have res as the smallest number that
    cannot be represented; that is all numbers from 1 to res-1 can be formed.
    So it is natural to think what will happen if we add arr[i] to res;

    1. If arr[i]<=res;
      So the number that can be formed from 0 to i will be 1 to (res-1+arr[i])
      since arr[i]<=res ; at most range will be 1 to 2*res-1; So still we can
      form res; inductively saying that we need to go on

    2. If arr[i]>res
      So the range now for 0 to i is 1 to (res+arr[i]-1) which is atleast
      (res+res+1-1)--> (2*res)
      So there is a gap for res which we have found So, the answer is res.

      Refer :-https://www.geeksforgeeks.org/find-smallest-value-represented-sum-subset-given-array/
  */
  for (int i = 0; i < n && arr[i] <= ans; i++)
  {
    ans += arr[i];
  }
  cout << ans;
}

int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  // #ifndef ONLINE_JUDGE
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  // #endif

  clock_t z = clock();

  int t = 1;
  // cin >> t;
  while (t--)
  {
    solve();
  }

  // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

  return 0;
}