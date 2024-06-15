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
#define st        set<int>
#define ump       unordered_map<int,int>
#define nx        cout<<"\n"
#define loop      (int i = 1; i <= n; i++)
#define lop       (int j = 1; j <= k; j++)
#define bits(x)   (int)__builtin_popcount(x)
const int mod = 1e9 + 7;
void yes(bool t) { cout<<(t ? "YES" : "NO")<<endl; }

/**********SOLUTION**********/

void solve()
{
    int n,k; cin >>n>>k;
    st a,b;
    for loop {a.insert(i); b.insert(i);}

    for lop {
        int p,q; cin>>p>>q;
        a.erase(p);
        b.erase(q);
        a.erase(q);
        b.erase(p);
    }

    int s=a.size();
    vi dp(s+1);
    dp[0]=1;

    for(int i=1; i<=s; i++){
        dp[i]+=dp[i-1];
        dp[i]%=mod;
        if(i-2>=0){
            int tmp=(i-1)*dp[i-2];
            tmp%=mod;
            tmp*=2;
            tmp%=mod;
            dp[i]+=tmp;
            dp[i]%=mod;
        }
    }
    cout<<dp[s]<<endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t; cin >> t; while (t--) solve(); return 0;
}