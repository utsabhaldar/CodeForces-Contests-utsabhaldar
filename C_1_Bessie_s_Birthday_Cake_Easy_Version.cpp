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
    int n,x,y;
    cin >> n>>x>>y;
    vi a(x);
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }

    int ans = x-2;
    sort(a.begin(),a.begin()+x);
    for (int i = 0; i < x-1; i++)
    {
        if(a[i]+2==a[i+1]) ans++;
    }
    if(x>1 && (a[x-1]+2)%n==a[0]) ans++;

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