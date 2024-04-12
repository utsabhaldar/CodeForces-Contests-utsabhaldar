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

void f(int n) {
    bool fg=true;
    bool fg2=true;
    for (int i = 0; i < 2 * n; i+=2) {
        for (int j = 0; j < 2 * n; j+=2) {
            if (fg) {
                cout << "##";
            } else {
                cout << "..";
            }
            fg=!fg;
        }
        nx;
        for (int j = 0; j < 2 * n; j+=2) {
            if (fg2) {
                cout << "##";
            } else {
                cout << "..";
            }
            fg2=!fg2;
        }
        if(n%2==0){
            fg = !fg;
            fg2 = !fg2;
        }
        cout << endl;
    }
}


void solve()
{
    int n;
    cin >> n;
    f(n);
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