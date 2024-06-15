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
#define lop       (int j = 0; j < n; j++)
#define bits(x)   (int)__builtin_popcount(x)
const int mod = 1e9 + 7;
#define no cout<<"No"<<endl
#define ys cout<<"Yes"<<endl
void yes(bool t) { cout<<(t ? "YES" : "NO")<<endl; }
unordered_map<int, unordered_map<int, int>> memo;

/**********SOLUTION**********/
int f(int n, int m) {
    if (m == 0) {
        return n;
    }
    if (n == 0) {
        return (1 << m) - 1;
    }

    // vector<int> a(n + 2);
    // for (int i = 0; i <= n + 1; ++i) {
    //     a[i] = i;
    // }
    // for (int k = 0; k < m; ++k) {
    //     vector<int> new_a = a;
    //     new_a[0] = a[0] | a[1];
    //     for (int i = 1; i <= n; ++i) {
    //         new_a[i] = a[i - 1] | a[i] | a[i + 1];
    //     }
    //     a = new_a;
    // }
    // return a[n];

    if (memo.count(n) && memo[n].count(m)) {
        return memo[n][m];
    }

    int ans = f(n - 1, m - 1) | f(n, m - 1) | f(n + 1, m - 1);
    memo[n][m] = ans;
    return ans;
}
void solve()
{
    int n,m; cin >>n>>m;
    cout <<f(n,m)<< endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t; cin >> t; while (t--) solve(); return 0;
}