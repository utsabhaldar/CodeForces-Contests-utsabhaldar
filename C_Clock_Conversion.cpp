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

string f(string s) {
    int h = stoi(s.substr(0, 2));
    int m = stoi(s.substr(3, 2));
    string p = (h >= 12) ? "PM" : "AM";

    if (h == 0) {
        h = 12;
    } else if (h > 12) {
        h -= 12;
    }
    string tmp=to_string(h);
    if(tmp.size()<2)tmp='0'+tmp;

    return tmp + ":" + (m < 10 ? "0" : "") + to_string(m) + " " + p;
}

void solve()
{
    string s;
    cin >> s;
    cout << f(s) << endl;
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