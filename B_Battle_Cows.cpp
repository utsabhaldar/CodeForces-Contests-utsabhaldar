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
    int n, num;
    cin >> n >> num;
    int ans = 0;
    vi a(n);
    for loop cin >> a[i];
    int k=a[num-1];
    int p=-1,q=-1; 

    for loop {
        if (a[i] >= k) {
            if (p == -1) {
                p = i;
            } else if (q == -1) {
                q = i; 
                break;
            }
        }
    }
    if(q==-1) {cout << (n-1) << endl;return;}
    ans = (p == 0) ? max(p - 1, abs(q - p - 1)) : max(p - 1, abs(q - p));
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t; cin >> t; while (t--) solve(); return 0;
}