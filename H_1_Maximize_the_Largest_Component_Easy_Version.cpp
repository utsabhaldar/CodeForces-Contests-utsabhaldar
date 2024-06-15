#include <iostream>
#include <vector>

using namespace std;

vector<vector<char>> grid;
vector<vector<bool>> visited;
int n, m;

bool isValid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

int dfs(int x, int y) {
    if (!isValid(x, y) || grid[x][y] == '.' || visited[x][y]) {
        return 0;
    }
    visited[x][y] = true;
    int size = 1;
    size += dfs(x + 1, y);
    size += dfs(x - 1, y);
    size += dfs(x, y + 1);
    size += dfs(x, y - 1);
    return size;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        grid.resize(n, vector<char>(m));
        visited.resize(n, vector<bool>(m, false));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> grid[i][j];
            }
        }

        int maxConnectedComponent = 0;

        // Calculate size of largest connected component
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == '#') {
                    maxConnectedComponent = max(maxConnectedComponent, dfs(i, j));
                }
            }
        }

        // Check each '.' cell
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == '.') {
                    // Temporarily change '.' to '#' and calculate connected component size
                    grid[i][j] = '#';
                    visited.assign(n, vector<bool>(m, false)); // Reset visited array
                    maxConnectedComponent = max(maxConnectedComponent, dfs(i, j));
                    grid[i][j] = '.'; // Reset grid back to original
                }
            }
        }

        cout << maxConnectedComponent << endl;
    }

    return 0;
}
