#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;

        vector<vector<int>> dp(n + 1, vector<int>(n * k + 1, 0));
        dp[0][0] = 1;

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= n * k; j++) {
                for (int x = 0; x <= min(k, j); x++) {
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - x]) % p;
                }
            }
        }

        int ans = 0;
        for (int i = 0; i <= n * k; i++) {
            ans = (ans + dp[n][i]) % p;
        }

        cout << ans << endl;
    }

    return 0;
}
