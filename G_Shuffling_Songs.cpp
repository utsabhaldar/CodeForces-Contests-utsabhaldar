#include <bits/stdc++.h>
using namespace std;
#define int       long long
#define ff        first
#define ss        second
#define pb        push_back
#define all(x)    (x).begin(), (x).end()
#define pii       pair<int,int>
#define vi        vector<int>
#define vii       vector<vector<int>>
#define vs        vector<string>
#define mp        map<int,int>
#define ump       unordered_map<int,int>
#define nx        cout<<"\n"
#define loop      (int i = 0; i < n; i++)
#define lop       (int j = 0; j < n; j++)
#define bits(x)   (int)__builtin_popcount(x)
const int MOD = 1e9 + 7;
inline int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
inline int lcm(int a, int b) { return a * b / gcd(a, b); }
void yes(bool t) { cout<<(t ? "YES" : "NO")<<endl; }

/**********SOLUTION**********/

void solve()
{
    int n;
    cin >> n;
    vs a(n), b(n);
    for loop cin>>a[i]>>b[i];

    vii tmp(n, vi(n));
    for loop for lop if(a[i]==a[j] || b[i]==b[j]) tmp[i][j]=true;

    vii dp(1<<n, vi(n));
    for loop dp[1<<i][i]=true;

    int ans=0;
    for(int s=0; s<1<<n; s++){
        for loop {
            if(!dp[s][i]) continue;
            ans=max(ans, bits(s));
            for lop if(~s>>j & 1 && tmp[i][j]) dp[s|1<<j][j]=true;
        }
    }
    cout << n-ans << endl;
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