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
#define ust       unordered_set<int>
#define st        set<int>
#define nx        cout<<"\n"
#define loop      (int i = 0; i < n; i++)
#define lop       (int j = 0; j < n; j++)
#define bits(x)   (int)__builtin_popcount(x)
const int mod = 1e9 + 7;
#define no cout<<"No"<<endl
#define ys cout<<"Yes"<<endl
void yes(bool t) { cout<<(t ? "YES" : "NO")<<endl; }

/**********SOLUTION**********/

void solve()
{
    int n; cin >> n;
    vi a(n);
    for loop cin >> a[i];

    int ans = a[n-1];
    sort(all(a));
    if(a[n-1]==ans) ans+=a[n-2];
    else ans+=a[n-1];

    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t; cin >> t; while (t--) solve(); return 0;
}