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
#define lop       (int j = 0; j < k; j++)
#define bits(x)   (int)__builtin_popcount(x)
const int mod = 1e9 + 7;
#define no cout<<"No"<<endl
#define ys cout<<"Yes"<<endl
void yes(bool t) { cout<<(t ? "YES" : "NO")<<endl; }

/**********SOLUTION**********/

int f(int n,int k,vi p,vi a,int c){
    int ans=0,sum=0;
    vector<bool>vis(n,false);
    while(!vis[c] && k>0){
        vis[c]=true;
        ans=max(ans,sum+(k*a[c]));
        sum+=a[c];
        k--;
        c=p[c]-1;
    }
    return ans;
}

void solve()
{
    int n,k,PB,PS;
    cin >>n>>k>>PB>>PS;
    PB--;PS--;
    vi p(n),a(n);
    for loop cin >> p[i];
    for loop cin >> a[i];
    
    int b=f(n,k,p,a,PB);
    int s=f(n,k,p,a,PS);
    
    if (b>s) cout<<"Bodya"<<endl;
    else if(b<s) cout<<"Sasha"<<endl;
    else cout<<"Draw"<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t; cin >> t; while (t--) solve(); return 0;
}