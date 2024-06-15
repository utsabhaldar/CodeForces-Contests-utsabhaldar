#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    // Reachability matrix, reachable[i][j] is true if i is reachable from j
    vector<vector<bool>> reachable(n, vector<bool>(n, false));
    
    auto ask = [](int i, int j) -> bool {
        cout << "? " << i + 1 << " " << j + 1 << endl;
        string response;
        cin >> response;
        return response == "YES";
    };

    // Fill the reachability matrix with queries
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            reachable[i][j] = ask(i, j);
        }
    }

    // Color array, initially all vertices are color 0
    vector<int> color(n, 0);

    // Determine the colors based on the reachability matrix
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (reachable[i][j]) {
                color[j] = color[i];  // Same color if i is reachable from j
            } else {
                color[j] = 1 - color[i];  // Different color if i is not reachable from j
            }
        }
    }

    // Output the results
    cout << "! ";
    for (int c : color) {
        cout << c << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
