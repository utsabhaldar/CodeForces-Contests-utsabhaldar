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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        sum %= mod;
    }

    sort(a.begin(), a.end());
    int ans = n;

    for (int i = 0; i < n; i++)
    {
        sum -= a[i];
        if (sum < 0)
        {
            break;
        }
        ans--;
    }

    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
