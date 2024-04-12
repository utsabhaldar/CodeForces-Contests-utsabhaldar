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
    int n, k;
    cin >> n >> k;
    vi a(n);
    for loop cin >> a[i];
    int ans = 0;
    int l = 0, r = n - 1;
    while (k > 0 && l <= r) {
        if (l == r) {
            if(k >= a[l]) ans++;
            break;
        }
        if (a[l]>0) {
            a[l]--;
            k--;
            if(a[l]==0){
                ans++;
                l++;
            }
        }
        if (k >0 && a[r]>0) {
            a[r]--;
            k--;
            if(a[r]==0){
                ans++;
                r--;
            }
        }
    }
    cout << ans << endl;
}


int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t; cin >> t; while (t--) solve(); return 0;
}