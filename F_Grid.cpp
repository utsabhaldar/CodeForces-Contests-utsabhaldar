#include <iostream>
#include <vector>
using namespace std;

int countAdjacentOnes(vector<vector<int>>& grid, int row, int col) {
    int count = 0;
    // Define the directions to check for adjacency
    vector<pair<int, int>> directions = {
        {-1, -1}, {-1, 0}, {-1, 1},
        {0, -1},           {0, 1},
        {1, -1},  {1, 0},  {1, 1}
    };
    for (const auto& dir : directions) {
        int newRow = row + dir.first;
        int newCol = col + dir.second;
        if (newRow >= 0 && newRow < grid.size() && newCol >= 0 && newCol < grid[0].size() && grid[newRow][newCol] == 1) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<vector<int>> grid(21, vector<int>(21));
    for (int i = 0; i < 21; i++) {
        for (int j = 0; j < 21; j++) {
            char c;
            cin >> c;
            grid[i][j] = c - '0';
        }
    }

    int maxCount = 0;
    for (int i = 0; i < 21; i++) {
        for (int j = 0; j < 21; j++) {
            if (grid[i][j] == 1) {
                maxCount = max(maxCount, countAdjacentOnes(grid, i, j));
            }
        }
    }

    cout << maxCount << endl;

    return 0;
}
