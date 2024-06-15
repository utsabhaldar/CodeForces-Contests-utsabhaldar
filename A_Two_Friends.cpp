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
#define loop      (int i = 1; i <= n; i++)
#define lop       (int j = 0; j < n; j++)
#define bits(x)   (int)__builtin_popcount(x)
const int mod = 1e9 + 7;
void yes(bool t) { cout<<(t ? "YES" : "NO")<<endl; }

/**********SOLUTION**********/

void solve()
{
    int n;
    cin >> n;
    vi p(n);
    p.pb(0);
    for loop cin >> p[i];
    bool f=false;
    int cnt=0;
    for loop {
        if(p[i] == i) cnt++;
        if (p[p[i]] == i) {
            f=true;
        }
    }
    if(cnt>2 || f) {cout<<2<<endl; return;}
    cout <<3<< endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t; cin >> t; while (t--) solve(); return 0;
}