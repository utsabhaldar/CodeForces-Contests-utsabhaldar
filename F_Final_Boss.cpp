#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void solve() {
    int h, n;
    cin >> h >> n;
    vector<int> a(n), c(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    priority_queue<int, vector<int>, greater<int>> cooldowns;
    int ans = 0;

    for (int i = n - 1; i >= 0; i--) {
        while (!cooldowns.empty() && cooldowns.top() <= i) {
            cooldowns.pop();
        }
        if (h <= 0) {
            break;
        }
        if (cooldowns.empty() || cooldowns.top() > i) {
            int rounds = (h + a[i] - 1) / a[i];
            ans += rounds;
            h -= rounds * a[i];
        }
        cooldowns.push(i - c[i]);
    }

    cout << ans << endl;
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
