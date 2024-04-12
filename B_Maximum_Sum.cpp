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

int mx(vi a)
{
    int n=a.size();
    int p = INT_MIN, q = 0;
 
    for (int i = 0; i < n; i++) {
        q = q + a[i];
        if (p < q)
            p = q;
 
        if (q < 0)
            q = 0;
    }
    return p;
}

void solve()
{
    int n,k;
    cin >> n>>k;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0;
    int tmp=mx(a)%MOD;

    for (int i = 0; i < k; i++)
    {
        if(tmp>=0){
            tmp= (tmp*2)%MOD;
        }
        else a.pb(0);
    }
    for (int i = 0; i < a.size(); i++)
    {
        ans = (ans + a[i]%MOD) % MOD;
        while(ans<0)ans+=MOD;
        ans%=MOD;
    }
    while(ans<0)ans+=MOD;

    cout << ans%MOD << endl;
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
