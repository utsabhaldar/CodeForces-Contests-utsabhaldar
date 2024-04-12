#include <bits/stdc++.h>
using namespace std;
#define int       long long
#define ff        first
#define ss        second
#define pb        push_back
#define all(x)    (x).begin(), (x).end()
#define pii       pair<int,int>
#define vi        vector<int>
#define vs        vector<string>
#define mp        map<int,int>
#define ump       unordered_map<int,int>
#define nx        cout<<"\n"
const int MOD = 1e9 + 7;
inline int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
inline int lcm(int a, int b) { return a * b / gcd(a, b); }
void yes(bool t) { cout<<(t ? "YES" : "NO")<<endl; }

/**********SOLUTION**********/

void solve()
{
    int n,x,y;
    cin >> n>>x>>y;
    vi a(x), p,q;
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
        a[i]--;
    }

    int ans = n;
    sort(a.begin(),a.end());
    for(int i=0; i<x; i++){
        int r=a[i], s=a[(i+1)%x];
        int tmp=(s-r+n)%n;
        if(tmp>=3){
            int temp=tmp-1;
            if(temp&1) p.pb(temp);
            else q.pb(temp);
        }
    }
    sort(p.begin(),p.end());
    for(int &x:p){
        if(y>=x/2){
            y-=x/2;
            x=0;
        }
        else{
            int a=min(y,x/2);
            x-=2*a; y-=a;
            ans-=x;
        }
    }
    for(int &x:q){
        int a=min(y,x/2);
        x-=2*a; y-=a;
        ans-=x;
    }

    cout << ans-2 << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}