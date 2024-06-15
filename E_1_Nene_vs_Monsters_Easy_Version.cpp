#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &ai : a) cin >> ai;

    int minEnergy = *min_element(a.begin(), a.end());
    int maxDiff = 0;
    for (int i = 0; i < n; ++i) {
        int diff = a[i] - a[(i + 1) % n];
        maxDiff = max(maxDiff, diff);
    }

    vector<int> survivors;
    for (int i = 0; i < n; ++i) {
        if (a[i] > minEnergy || a[i] - a[(i + 1) % n] == maxDiff) {
            survivors.push_back(i + 1);
        }
    }

    cout << survivors.size() << '\n';
    for (int i : survivors) cout << i << ' ';
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
