#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        long long count = 0;
        for (int a = 1; a <= n; a++) {
            for (int b = 1; b <= m; b++) {
                if ((a + b) % (b * gcd(a, b)) == 0) {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
