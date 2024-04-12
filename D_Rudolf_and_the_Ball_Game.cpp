#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findPossiblePlayers(int n, int m, int x, vector<pair<int, char>>& throws) {
    vector<bool> possible(n + 1, false);
    possible[x] = true;

    for (int i = 0; i < m; i++) {
        int r = throws[i].first;
        char c = throws[i].second;

        vector<bool> new_possible(n + 1, false);

        for (int j = 1; j <= n; j++) {
            if (possible[j]) {
                int next_player = (c == '0' ? (j + r) % n : (j - r + n) % n);
                if (next_player == 0) next_player = n;
                new_possible[next_player] = true;
            }
        }

        possible = new_possible;
    }

    vector<int> players;
    for (int i = 1; i <= n; i++) {
        if (possible[i]) players.push_back(i);
    }

    cout << players.size() << endl;
    for (int i = 0; i < players.size(); i++) {
        cout << players[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, x;
        cin >> n >> m >> x;

        vector<pair<int, char>> throws(m);
        for (int i = 0; i < m; i++) {
            cin >> throws[i].first >> throws[i].second;
        }

        findPossiblePlayers(n, m, x, throws);
    }

    return 0;
}
