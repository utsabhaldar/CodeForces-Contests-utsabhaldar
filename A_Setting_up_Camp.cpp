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

/**********SOLUTION**********/

void solve()
{
    int a,b,c;
    cin >> a>>b>>c;

    int ans = a;
    ans+=b/3;
    int tmp=b%3;
    if(tmp+c<3 && tmp>0) {
        cout<<-1<<endl;
        return;
    }
    ans+=(tmp+c)/3;
    if((tmp+c)%3)ans++;
    cout<<ans<<endl;
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