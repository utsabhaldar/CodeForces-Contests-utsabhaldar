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
#define map        map<int,int>
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
    int n,c,d;
    cin >> n >> c >> d;
    int mn = INT_MAX;
    map mp;
    for (int i = 0; i < n * n; i++){
        int a;
        cin >> a;
        mn = min(mn, a);
        mp[a]++;
    }

    int f = mn,p;
    bool fl=true;
    for loop{
        f = mn+i*c;
        p = f;
        if (!mp[p] && fl){
            cout << "NO"<<endl;
            return;
        }
        for lop{
            p = f+j*d;
            if (!mp[p]){
                cout << "NO"<<endl;
                return;
            }
            mp[p]--;
        }
    }
    cout << "YES"<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t; cin >> t; while (t--) solve(); return 0;
}