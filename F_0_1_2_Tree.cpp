#include <bits/stdc++.h>
using namespace std;
#define int       long long
#define pb        push_back
#define all(x)    (x).begin(), (x).end()
#define vi        vector<int>
#define vs        vector<string>
#define mp        map<int,int>
#define ump       unordered_map<int,int>
#define nx        cout<<"\n"
const int mod = 1e9 + 7;
void yes(bool t) { cout<<(t ? "YES" : "NO")<<endl; }

/**********SOLUTION**********/

void solve()
{
    int a,b,c;
    cin >> a >> b >> c;
    cout << (a != c - 1 ? -1 : b / c + ceil(log2(c+(b%c)))) << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}