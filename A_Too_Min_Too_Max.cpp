#include <bits/stdc++.h>
using namespace std;

#define int long long
#define v vector<long long>
#define vv vector<vector<long long>>
#define p pair<long long, long long>

const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    int ans = abs(a[0] - a[n - 1]) + abs(a[n - 1] - a[1]) + abs(a[1] - a[n - 2]) + abs(a[n - 2] - a[0]);

    cout << ans << endl;
}


int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}