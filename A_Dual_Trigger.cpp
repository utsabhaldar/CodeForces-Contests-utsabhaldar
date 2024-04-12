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
    string s;
    cin >> n >> s;
    if(n==1 && s!="0") {cout<<"NO"<<endl;return;}
    if(n==2 && s!="00") {cout<<"NO"<<endl;return;}
    if(n==3 && s[1]=='1') {cout<<"NO"<<endl;return;}
    
    int cnt=0;
    for loop if(s[i]=='1') cnt++;
    
    if(cnt==2){
        for(int i=0; i<n-1; i++){
            if(s[i]=='1' && s[i+1]=='1') {cout<<"NO"<<endl;return;}
        }
    }
    yes(cnt%2==0);
}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t; cin >> t; while (t--) solve(); return 0;
}