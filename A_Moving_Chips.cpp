#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> cells(n);
        int ans = 0;
        int last = -1;
        for (int i = 0; i < n; i++) {
            cin >> cells[i];
            if (cells[i] == 1) {
                if (last != -1) {
                    int dist = i - last - 1;
                    ans += dist;
                }
                last = i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
