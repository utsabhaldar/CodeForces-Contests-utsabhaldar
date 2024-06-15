#include <iostream>
#include <cmath>

using namespace std;

const int MOD = 1e9 + 7;

int digitSum(long long n) {
    int sum = 0;
    while (n > 0) {
        sum = (sum + n % 10) % MOD;
        n /= 10;
    }
    return sum;
}

void solve() {
    int l, r, k;
    cin >> l >> r >> k;

    long long ans = 0;
    for (int i = l; i < r; ++i) {
        long long n = pow(10, i);
        long long dSum = (k * digitSum(n)) % MOD;
        if (digitSum(k * n) == dSum) {
            ans++;
        }
    }

    cout << ans % MOD << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
