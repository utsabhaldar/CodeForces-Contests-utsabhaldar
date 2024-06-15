#include <bits/stdc++.h>
using namespace std;

string balancedShuffle(string s) {
    int balance = 0;
    vector<pair<int, pair<int, char>>> v;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(') {
            ++balance;
        } else {
            --balance;
        }
        v.push_back({balance, {-i, s[i]}});
    }

    sort(v.begin(), v.end());

    string result;
    for (auto& p : v) {
        result += p.second.second;
    }

    return result;
}

int main() {
    string s;
    cin >> s;
    cout << balancedShuffle(s) << endl;
    return 0;
}
