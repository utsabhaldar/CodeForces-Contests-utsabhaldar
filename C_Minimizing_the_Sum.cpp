#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = 0;
        while (k > 0) {
            bool reduced = false;
            for (int i = 1; i < n - 1; i++) {
                if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
                    ans += min(a[i - 1], a[i + 1]);
                    a[i] = min(a[i - 1], a[i + 1]);
                    reduced = true;
                    break;
                }
            }
            if (!reduced) break;
            k--;
        }

        for (int i = 0; i < n - 1; i++) {
            ans += a[i];
        }
        ans += a.back(); // Add the last element
        cout << ans << endl;
    }

    return 0;
}
