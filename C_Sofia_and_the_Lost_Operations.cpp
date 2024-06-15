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
#define looop      (int i = 0; i < m; i++)
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
    vi a(n),b(n);
    for loop cin >> a[i];
    for loop cin >> b[i];
    int m; cin >> m;
    vi d(m);
    for looop cin >> d[i];
    
    ump cnt;
    for looop cnt[d[i]]++;
    ump cnt2;
    for looop cnt2[b[i]]++;
    
    bool f = true;
    for loop {
        if (a[i] != b[i]) {
            if (cnt[b[i]]) cnt[b[i]]--;
            else if (cnt[b[i]] > 0) {
                cnt[b[i]]--;
            }
            else {f = false; break;}
        }
    }
    
    // for(auto &e : cnt){
    //     if(e.second<cnt2[e.first]) f=false;
    // }
    yes(f);
}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t; cin >> t; while (t--) solve(); return 0;
}