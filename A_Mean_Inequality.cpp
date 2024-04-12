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
    vector<int> a(2 * n);
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " " << a[i+n] << " ";
    }
    cout<<endl;
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