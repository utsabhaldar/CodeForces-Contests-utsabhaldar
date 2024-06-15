#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
vector<int> colors;

void dfs(int v, int parent, int steps, int& minSteps) {
    if (colors[v] == 0) {
        steps++;
    } else if (colors[v] == 1) {
        steps += 2;
    }

    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u]) {
            dfs(u, v, steps, minSteps);
        }
    }

    visited[v] = false;

    if (v != parent) {
        if (colors[v] == 0) {
            steps--;
        } else if (colors[v] == 1) {
            steps -= 2;
        }
    }

    if (steps < minSteps) {
        minSteps = steps;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        adj.assign(n + 1, vector<int>());
        visited.assign(n + 1, false);
        colors.assign(n + 1, -1);

        int a, b;
        cin >> a >> b;

        for (int i = 0; i < n - 1; i++) {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        colors[a] = 0;  // Red
        if (a != b) {
            colors[b] = 1;  // Blue
        }

        int minSteps = INT_MAX;
        dfs(a, -1, 0, minSteps);
        cout << minSteps << endl;
    }

    return 0;
}
