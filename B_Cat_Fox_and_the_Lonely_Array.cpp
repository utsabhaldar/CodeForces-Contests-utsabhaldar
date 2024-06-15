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
#define lop       (int j = 1; j <= 20; j++)
#define bits(x)   (int)__builtin_popcount(x)
const int mod = 1e9 + 7;
#define no cout<<"No"<<endl
#define ys cout<<"Yes"<<endl
void yes(bool t) { cout<<(t ? "YES" : "NO")<<endl; }

/**********SOLUTION**********/

int dp[100001][20];

int fn(int a,int b){
    int res=0;
    for(int i=20; i>=0; i--){
        if((1<<i)<=b-a+1){
            res|=dp[a][i];
            a+=i<<i;
        }
    }
    return res;
}

void solve()
{
    int n; cin >> n;
    vi a(n);
    for loop cin >> a[i];
    for loop dp[i][0]=a[i];
    for lop for(int i=0; i+(1<<j)<=n; i++) dp[i][j]=dp[i][j-1]|dp[i+(1<<(j-1))][j-1];

    int ans=n, l=1, r=n;
    while (l<=r) {
        int mid=l+(r-1)/2, tmp=0;
        for(int i=0; i<mid; i++) tmp|=a[i];
        bool f=true;
        for(int i=1; i<n; i++){
            int lo=i, hi=i+mid-1;
            if(hi<=n-1){
                int c=fn(lo,hi);
                if(c!=tmp){f=false; break;}
            }
            if(f){
                ans=min(ans,mid);
                r=mid-1;
            }else l=mid+1;
        }
    }

    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t; cin >> t; while (t--) solve(); return 0;
}