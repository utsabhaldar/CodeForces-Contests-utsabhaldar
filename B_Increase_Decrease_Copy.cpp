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
#define lop       (int j = 0; j < n+1; j++)
#define bits(x)   (int)__builtin_popcount(x)
const int mod = 1e9 + 7;
#define no cout<<"No"<<endl
#define ys cout<<"Yes"<<endl
void yes(bool t) { cout<<(t ? "YES" : "NO")<<endl; }

/**********SOLUTION**********/

// void f(const vector<int>& a, const vector<int>& b, int& x, int& y1, int& y2) {
//     unordered_map<int, int> freq;
//     for (int num : a) freq[num]++;
//     for (int num : b) freq[num]--;
    
//     for (auto f : freq) {
//         if (f.second == 1) {
//             y2 = f.first;
//         } else if (f.second == -1) {
//             x = f.first;
//         }
//     }
    
//     freq.clear();
//     for (int num : b) freq[num]++;
//     for (int num : a) freq[num]--;
    
//     for (auto f : freq) {
//         if (f.second == 1 && f.first != y2) {
//             y1 = f.first;
//         }
//     }
// }

void solve()
{
    int n; cin >> n;
    vi a(n), b(n+1);
    for loop cin >> a[i];
    for lop cin >> a[j];
    int ans=0;
    
    // int sa = accumulate(a.begin(), a.end(), 0LL);
    // int sb = accumulate(b.begin(), b.end(), 0LL);

    // int ele = sb - sa;
    
    // int x, y1, y2;
    // f(a, b, x, y1, y2);

    // if(y1<y2) swap(y1, y2);
    // if(x<y2 && x>y1) ans= abs(x - y1) + abs(x - y2);
    // if(x>=y1 && x>=y2) ans =(x-y2) + (y2-y1);
    // if(x<=y1 && x<=y2) ans =(y1-x) + (y1-y2);

    sort(all(a));
    sort(all(b));
    int i=0,j=0;
    while(i<n && j<n+1){
        if(a[i]<b[j]){
            ans+=b[j]-a[i]; i++;
        }
        else if(a[i]>b[j]){
            ans+=a[i]-b[j]; j++;
        }
        else{
            i++; j++;
        }
    }

    while(j<n+1){
        ans+=b[j]; j++;
    }
    while(i<n){
        ans+=a[i]; i++;
    }

    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t; cin >> t; while (t--) solve(); return 0;
}