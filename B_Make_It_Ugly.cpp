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
const int mod = 1e9 + 7;
void yes(bool t) { cout<<(t ? "YES" : "NO")<<endl; }

/**********SOLUTION**********/

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    for loop cin >> a[i];
    
    mp m;
    for loop m[a[i]]++;
    if(m.size()==1){
        cout<<-1<<endl; return;
    }
    
    int ans=n, p=a[0], q=0;
    bool f=true;
    for loop {
        if(a[i]==a[0] && f) q++;
        else {
            ans=min(ans,q); q=0;
        }
    }
    cout<<min(ans,q)<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t; cin >> t; while (t--) solve(); return 0;
}