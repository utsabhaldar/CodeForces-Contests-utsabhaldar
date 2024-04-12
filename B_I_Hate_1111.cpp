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

    if (111*(n%11)<=n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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