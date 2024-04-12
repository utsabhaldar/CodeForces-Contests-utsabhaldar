#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a;
        cin >> a;

        int left_ones = 0, right_zeros = 0;
        int prefix_sum[n+1] = {0};
        for (int i = 1; i <= n; i++) {
            prefix_sum[i] = prefix_sum[i-1] + (a[i-1] - '0');
        }

        int ans = n, min_diff = n;
        for (int i = 0; i <= n; i++) {
            int left_zeros = i - prefix_sum[i];
            int right_ones = prefix_sum[n] - prefix_sum[i];
            int diff = abs(n / 2 - i);
            if (left_zeros + right_ones < min_diff) {
                ans = i;
                min_diff = left_zeros + right_ones;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
