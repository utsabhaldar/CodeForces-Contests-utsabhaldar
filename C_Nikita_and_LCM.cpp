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

/**********SOLUTION**********/

int lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return (a / __gcd(a, b)) * b;
}

// int fun(const vi& v) {
//     int ans = v[0];
//     for (int i = 1; i < v.size(); ++i) {
//         ans = lcm(ans, v[i]);
//     }
//     return ans;
// }

// void fn(vi& a, st& stt, vi& v, int ind, int& ln) {
//     if (ind == a.size()) {
//         if (!v.empty()) {
//             int l = fun(v);
//             if (stt.find(l) == stt.end()) {
//                 ln = max(ln, (int)v.size());
//             }
//         }
//         return;
//     }

//     v.pb(a[ind]);
//     fn(a, stt, v, ind + 1, ln);

//     v.pop_back();
//     fn(a, stt, v, ind + 1, ln);
// }

// int f(vi& a) {
    // st stt(all(a));
    // vi v;
    // int ln = 0;
    // fn(a, stt, v, 0, ln);
    // return ln;




    // int n = a.size();
    // st stt(all(a));
    // vector<unordered_set<int>> dp(n + 1);

    // dp[0].insert(1);

    // for loop {
    //     for (int j = i; j >= 0; --j) {
    //         for (int x : dp[j]) {
    //             dp[j + 1].insert(lcm(x, a[i]));
    //         }
    //     }
    // }

    // for (int i = n; i >= 0; --i) {
    //     if (!dp[i].empty()) {
    //         for (int x : dp[i]) {
    //             if (stt.find(x) == stt.end()) {
    //                 return i;
    //             }
    //         }
    //     }
    // }

    // return 0;
// }


void solve()
{
    int n; cin >> n;
    vi a(n);
    for loop cin >> a[i];

    // cout <<f(a)<< endl;
    
    st stt(all(a));
    int ln = 0, sb = (1<<n);
    vi dp(sb, 0);
    dp[0] = 1;

    for (int j=1; j<sb; j++) {
        for loop {
            if (j & (1<<i)) {
                int tmp = j^(1<<i);
                if (dp[tmp] != 0) {
                    int l = lcm(dp[tmp], a[i]);
                    dp[j] = l;
                    if (stt.find(l) == stt.end()) {
                        ln = max(ln, bits(j));
                    }
                }
            }
        }
    }

    cout << ln << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t; cin >> t; while (t--) solve(); return 0;
}