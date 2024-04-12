#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        string s;
        cin >> s;

        int prod = 1;
        for (int i = 0; i < n; i++) {
            prod = (prod * a[i]) % m;
        }

        int l = 0, r = n - 1;
        vector<int> result;
        result.push_back(prod);

        for (char c : s) {
            if (c == 'L') {
                prod = (prod * a[l]) % m;
                l++;
            } else {
                prod = (prod * a[r]) % m;
                r--;
            }
            result.push_back(prod);
        }

        for (int i : result) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
