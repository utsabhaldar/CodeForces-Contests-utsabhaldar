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

void solve()
{
    int val;
    cin >> val;
    bool ans = true;
    int past = val;
    int arr[] = {100000, 11111, 11110, 11101, 11100, 11011, 11010, 11001, 11000,
                 10111, 10110, 10101, 10100, 10011, 10010, 10001, 10000, 1111, 1110,
                 1101, 1100, 1011, 1010, 1001, 1000, 111, 110, 101, 100, 11, 10};
    while (true) {
        int got = 0;
        for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
            int num = arr[i];
            if (val >= num) {
                if (val % num == 0) {
                    past = val;
                    val = val / num;
                    got = 1;
                    break;
                }
            }
        }
        if (got == 0) {
            if (val == 1) {
                ans = true;
            } else {
                ans = false;
            }
            break;
        } else {
            if (val <= 0) {
                break;
            } else {
                if (past == val) {
                    ans = false;
                    break;
                }
            }
        }
    }
    cout << (ans ? "YES" : "NO") << endl;
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
