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
    int n,x;
    cin >> n>>x;
    vi a(n);
    bool f=false;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]==x){
            f=true;break;
        }
    }
    yes(f);
}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
        solve();
    
    return 0;
}