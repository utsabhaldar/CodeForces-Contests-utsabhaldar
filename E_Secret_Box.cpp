#include <iostream>

using namespace std;

#define MOD 1000000007

void solve()
{
    int64_t x, y, z, k;
    cin >> x >> y >> z >> k;

    int64_t count = 0;
    for (int64_t i = 1; i <= x; ++i) {
        for (int64_t j = 1; j <= y; ++j) {
            for (int64_t l = 1; l <= z; ++l) {
                if (1LL * i * j * l == k && x - i + 1 > 0 && y - j + 1 > 0 && z - l + 1 > 0) {
                    count += (x - i + 1) * (y - j + 1) * (z - l + 1);
                }
            }
        }
    }

    cout << count % MOD << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
