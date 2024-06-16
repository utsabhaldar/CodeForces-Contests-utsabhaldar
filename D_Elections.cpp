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
#define lop       (int j = 0; j < a[0]; j++)
#define bits(x)   (int)__builtin_popcount(x)
const int mod = 1e9 + 7;
#define no cout<<"No"<<endl
#define ys cout<<"Yes"<<endl
void yes(bool t) { cout<<(t ? "YES" : "NO")<<endl; }

/**********SOLUTION**********/

void solve()
{
    vi a(2);
    cin >>a[0]>>a[1];
    vi c(a[0]);
    bool f=true;
    for lop cin >> c[j];

    int p = 0;
    vi d = c;
    d[0] += a[1];
    int y = *max_element(c.begin(), c.end());
    int z = distance(d.begin(), max_element(d.begin(), d.end()));

    for (int i = 0; i < c.size() && f; ++i) {
        if (i==z) {
            cout << 0 << " ";
            p += c[i];
            continue;
        }
        if (c[i]+p+a[1] >= y && f) {
            cout << i << " ";
        } else {
            int ans=i+1;
            cout << ans << " ";
        }
        p += c[i];
    }
    nx;
}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t; cin >> t; while (t--) solve(); return 0;
}