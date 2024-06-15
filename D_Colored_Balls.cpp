#include <iostream>
#include <vector>
using namespace std;
const int MOD = 998244353;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        long long val = 1LL * a[i] * (a[i] + 1) / 2 % MOD;
        ans = (ans + val) % MOD;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long val = 1LL * min(a[i], a[j]) % MOD;
            ans = (ans + val) % MOD;
        }
    }

    cout << ans << endl;

    return 0;
}
