#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;

        int q;
        cin >> q;
        vector<pair<int, int>> queries(q);
        for (int i = 0; i < q; ++i) {
            cin >> queries[i].first >> queries[i].second;
        }

        vector<int> prefix_s0(n + 1, 0), prefix_s1(n + 1, 0);
        vector<int> prefix_t0(n + 1, 0), prefix_t1(n + 1, 0);

        for (int i = 0; i < n; ++i) {
            prefix_s0[i + 1] = prefix_s0[i] + (s[i] == '0');
            prefix_s1[i + 1] = prefix_s1[i] + (s[i] == '1');
            prefix_t0[i + 1] = prefix_t0[i] + (t[i] == '0');
            prefix_t1[i + 1] = prefix_t1[i] + (t[i] == '1');
        }

        for (const auto& query : queries) {
            int l = query.first, r = query.second;

            int s0 = prefix_s0[r] - prefix_s0[l - 1];
            int s1 = prefix_s1[r] - prefix_s1[l - 1];
            int t0 = prefix_t0[r] - prefix_t0[l - 1];
            int t1 = prefix_t1[r] - prefix_t1[l - 1];

            int max_ones = s1;

            for (int i = l; i <= r - 2; ++i) {
                if (s[i-1] == '0' && s[i+1-1] == '0' && s[i+2-1] == '0' && t[i+1-1] == '1') {
                    max_ones++;
                    i += 2;
                }
            }

            for (int i = l; i <= r - 2; ++i) {
                if (t[i-1] == '1' && t[i+1-1] == '1' && t[i+2-1] == '1' && s[i+1-1] == '0') {
                    max_ones++;
                    i += 2; 
                }
            }

            cout << max_ones << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
