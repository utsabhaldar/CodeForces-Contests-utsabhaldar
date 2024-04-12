#include <bits/stdc++.h>
using namespace std;
#define int       long long
#define ff        first
#define ss        second
#define pb        push_back
#define all(x)    (x).begin(), (x).end()
#define pii       pair<int,int>
#define vi        vector<int>
#define vs        vector<string>
#define mp        map<int,int>
#define ump       unordered_map<int,int>
#define nx        cout<<"\n"
const int MOD = 1e9 + 7;
inline int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
inline int lcm(int a, int b) { return a * b / gcd(a, b); }
void yes(bool t) { cout<<(t ? "YES" : "NO")<<endl; }

/**********SOLUTION**********/

void solve()
{
    int n,x;
    cin >> n>>x;
    vi a(n+1);
    a[0]=0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;

    for (int i = 1; i < n+1; i++)
    {
        int tmp=(a[i]-a[i-1]);
        ans=max(ans, tmp);
    }
    if(a[n]<x) ans=max((x-a[n])*2, ans);

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