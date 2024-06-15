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
        for (int b = 1; b <= m; b++) {
            int g = gcd(b, b);
            count += (n / b) * (m / (b * g));
        }
        cout << count << endl;
    }
    return 0;
}
