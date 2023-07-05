#include <bits/stdc++.h>
using namespace std;
#define ll long long
// Total positions to place first knight=n^2(say k1)
// Total positions to place the second knight=n^2-1(say k2)
// Total ways to place the two knight will be k1*k2/2 since they are same objects
// A knight attacks the other in a 2x3 way or 3x2 way
// We need to find the number of 2x3 ways in realtion to the current grid
// After crtitcal analysis we can say that the number of 2x3=(n-1)*(n-2)
// By symmetry 3x2=(n-2)*(n-1)
// We can then say that the number of ways to attack will be 2*(sum of 2x3 ansd 3x2)
// 2* since in the elemental space the two knights can attack each other
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  ll n;
  cin >> n;
  ll totalpos, attackpos;
  for (ll i = 1; i <= n; i++)
  {
    totalpos = (i * i) * (i * i - 1) / 2;
    attackpos = 4 * (i - 2) * (i - 1);
    cout << (totalpos - attackpos) << "\n";
  }
  return 0;
}
