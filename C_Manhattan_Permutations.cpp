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
#define loop      (int i = 1; i <= n; i++)
#define lop       (auto i = 0; i < a.size(); i++)
#define bits(x)   (int)__builtin_popcount(x)
const int mod = 1e9 + 7;
#define no cout<<"No"<<endl
#define ys cout<<"Yes"<<endl
void yes(bool t) { cout<<(t ? "YES" : "NO")<<endl; }

/**********SOLUTION**********/

void solve()
{
    int n,k; cin >>n>>k;
    vi a;
    int sum=0; bool f=true;
    for loop {
        sum+=abs(i-(n-i+1));  
        if(f) a.pb(i);
    }
 
    if (k%2==1 || sum<k) no;
    else {
        ys;
        int ind=0;
        int N=n;
 
        while (k > (N-1)*2) {
            swap(a[ind],a[n-ind-1]); 
            k-=(N-1)*2;  
            N-=2;
            ind++;
        }
 
        k/=2;
        swap(a[ind],a[ind+k]);  
        for lop cout <<a[i]<< " ";
        nx;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t; cin >> t; while (t--) solve(); return 0;
}