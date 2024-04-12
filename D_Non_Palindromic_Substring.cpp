#include <bits/stdc++.h>
using namespace std;

#define int                          long long int
#define double                       long double
#define ff                           first
#define ss                           second
#define pb                           push_back
#define eb                           emplace_back
#define all(x)                       (x).begin(), (x).end()
#define pii                          pair<int,int>
#define pll                          pair<long long, long long>
#define vi                           vector<int>
#define vl                           vector<long long>
#define vd                           vector<double>
#define vs                           vector<string>
#define vvl                          vector<vector<long long>>
#define mp                           map<int,int>
#define ms(x,y)                      memset(x,y,sizeof(x))
#define ump                          unordered_map<int,int>
#define lb                           lower_bound
#define ub                           upper_bound
#define nx                           cout<<"\n"
#define inf                          9223372036854775807
#define PI                           3.14159265
 
const int MOD = 1e9 + 7;
 
inline int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
inline int lcm(int a, int b) { return a * b / gcd(a, b); }
inline int add(int a, int b) {    return ((a % MOD) + (b % MOD)) % MOD;}
 
inline int multi(int a, int b) {   return ((a % MOD) * (b % MOD)) % MOD;}
 
inline int sub(int a, int b) {       a %= MOD; b %= MOD; a -= b; if (a < 0) a += MOD; return a;}
 
inline int power(int a, int b) {       a %= MOD; int res = 1; while (b > 0) {if (b & 1) {res = multi(res, a);} a = multi(a, a); b >>= 1;}  return res;}
 
bool isPrime(int  x) {      if (x <= 4 || x % 2 == 0 || x % 3 == 0) {return x == 2 || x == 3;} for (int i = 5; i * i <= x; i += 6) {if (x % i == 0 || x % (i + 2) == 0) { return 0;}} return 1;}



/**********SOLUTION**********/

bool func(const string& s, int st, int en) {
    while (st < en) {
        if (s[st] != s[en]) {
            return false;
        }
        st++;
        en--;
    }
    return true;
}

int f(const string& s, int l, int r) {
    int ans = 0;
    for (int len = 1; len <= r-l+1; len++) {
        for (int i = l; i <= r-len+1; i++) {
            if (!func(s, i, i+len-1)) {
                ans += len;
                break;
            }
        }
    }
    return ans;
}

void solve()
{
    int n,q;
    cin >>n>>q;
    string s;
    cin >>s;
    while(q--){
        int l,r;
        cin >> l>>r;
        cout<<f(s,l-1,r-1)<<endl;
    }
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