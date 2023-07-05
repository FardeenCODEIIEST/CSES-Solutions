#include <bits/stdc++.h>
#define MOD 1000000007;
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
long long min(long long a, long long b)
{
    return (a < b) ? a : b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    long long sum = 0;
    vector<long long> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        sum += p[i];
    }
    // Creating subsequences using bits
    long long ans = LLONG_MAX;
    // Brute Force
    for (long long i = 0; i < 1 << n; i++)
    {
        long long s = 0;
        for (long long j = 0; j < n; j++)
        {
            if ((1 << j) & i)
            {
                s += p[j];
            }
        }
        long long curr = abs(sum - s - s); // sum-curr and curr
        ans = min(ans, curr);
    }
    cout << ans;
    return 0;
}