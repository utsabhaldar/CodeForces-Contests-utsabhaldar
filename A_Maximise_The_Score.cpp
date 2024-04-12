#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
        int n;
        cin >> n;
        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
        }
        priority_queue<int, vector<int>, greater<int>> pq(a.begin(), a.end());
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            int x = pq.top(); pq.pop();
            int y = pq.top(); pq.pop();
            ans += min(x, y);
            pq.push(max(x, y));
        }
        cout << ans << endl;

    return 0;
}
