#include <bits/stdc++.h>
using namespace std;

int sumOfDig(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

vector<int> precomp() {
    vector<int> dp(200001, 0);
    for (int i = 1; i <= 200000; i++) {
        dp[i] = dp[i - 1] + sumOfDig(i);
    }
    return dp;
}

int main() {
    int t;
    cin >> t;
    vector<int> dp = precomp();
    while (t--) {
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }
    return 0;
}
