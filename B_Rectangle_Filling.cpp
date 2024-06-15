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
#define lop       (int j = 0; j < m; j++)
#define bits(x)   (int)__builtin_popcount(x)
const int mod = 1e9 + 7;
void yes(bool t) { cout<<(t ? "YES" : "NO")<<endl; }
#define no cout<<("NO")<<endl
#define ys cout<<("YES")<<endl 

/**********SOLUTION**********/

void solve()
{
    int n,m; cin >>n>>m;
    vs s; 
    for loop {
        string str; cin>>str;
        s.pb(str);
    }
    bool f=true;
    if(n==1){
        if(s[0][0]==s[0][m-1]) ys;
        else no;
    }
    else if(s[0][0] == s[0][m-1] && s[n-1][m-1] == s[n-1][0] && s[0][0] != s[n-1][m-1]){
        if(count(s[n-1].begin(), s[n-1].end(), s[0][0])==0 && count(s[0].begin(), s[0].end(), s[n-1][0])==0) no;
        else ys;
    }
    else if(s[0][0] == s[n-1][0] && s[0][m-1] == s[n-1][m-1] && s[0][0] != s[0][m-1]){
        bool f=true;
        for loop if(s[i][0]!=s[0][0] || s[i][m-1]!=s[0][m-1]) f=false;
        if(f) no;
        else ys;
    }
    
    else ys;
}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t; cin >> t; while (t--) solve(); return 0;
}
