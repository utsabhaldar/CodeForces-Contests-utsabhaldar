#include <bits/stdc++.h>
using namespace std;

int maxTandemRepeat(string s) {
    int n = s.length();
    int ans = 0;

    for (char c = 'a'; c <= 'z'; c++) {
        for (char d = 'a'; d <= 'z'; d++) {
            int cnt = 0;
            for (int i = 0; i < n - 1; i++) {
                if (s[i] == c || s[i] == '?' || s[i] == d) {
                    if (s[i + 1] == c || s[i + 1] == '?' || s[i + 1] == d) {
                        cnt += 2;
                        ans = max(ans, cnt);
                    } else {
                        cnt = 0;
                    }
                } else {
                    cnt = 0;
                }
            }
        }
    }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << maxTandemRepeat(s) << "\n";
    }
    return 0;
}
