#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adj;
vector<int> subsize;

void dfs(int v, int p) {
    subsize[v] = 1;
    for (int u : adj[v]) {
        if (u != p) {
            dfs(u, v);
            subsize[v] += subsize[u];
        }
    }
}

int findSize(int v, int p, int k) {
    int ans = 1;
    for (int u : adj[v]) {
        if (u != p) {
            ans = max(ans, findSize(u, v, k));
        }
    }
    if (ans == 1) {
        if (k > 0) {
            k--;
            ans = subsize[v];
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        adj.assign(n + 1, vector<int>());
        subsize.assign(n + 1, 0);
        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        dfs(1, 0);
        int x = findSize(1, 0, k);
        cout << x << "\n";
    }

    return 0;
}
