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
    int ans = 0;

    ans += n / 15;

    if (n % 15 == 12)
        ans += 2;
    else
    {
        if (n > 15)
        {
            if (n % 15 == 5 || n % 15 == 8)
            {
                ans -= 1;
                n -= ans * 15;
            }
            else
            {
                n -= ans * 15;
            }
        }

        if (n >= 10)
        {
            int tmp = n / 10;
            ans += tmp;
            n -= tmp * 10;
        }

        if (n >= 6)
        {
            int tmp = n / 6;
            ans += tmp;
            n -= tmp * 6;
        }

        if (n >= 3)
        {
            int tmp = n / 3;
            ans += tmp;
            n -= tmp * 3;
        }

        ans += n;
    }

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