#include <bits/stdc++.h>
using namespace std;
#define int       long long
#define ff        first
#define ss        second
#define pb        push_back
#define all(x)    (x).begin(), (x).end()
#define pii       pair<int,int>
#define vi        vector<int>
#define vii       vector<vector<int>>
#define vs        vector<string>
#define mp        map<int,int>
#define ump       unordered_map<int,int>
#define ust       unordered_set<int>
#define st        set<int>
#define nx        cout<<"\n"
#define loop      (int i = 0; i < n; i++)
#define lop       (int j = 0; j < n; j++)
#define bits(x)   (int)__builtin_popcount(x)
const int mod = 1e9 + 7;
#define no cout<<"No"<<endl
#define ys cout<<"Yes"<<endl
void yes(bool t) { cout<<(t ? "YES" : "NO")<<endl; }

/**********SOLUTION**********/
int countSpecialColumns(const vector<vector<int>>& matrix, const vector<int>& rows) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> count(m, 0);

    for (int row : rows) {
        for (int j = 0; j < m; ++j) {
            count[j] += matrix[row][j];
        }
    }

    int specialCount = 0;
    for (int j = 0; j < m; ++j) {
        if (count[j] == 1) {
            specialCount++;
        }
    }

    return specialCount;
}


pair<int, vector<int>> findMaxSpecialColumns(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    int maxSpecial = 0;
    vector<int> bestRows;

    for (int i = 0; i < (1 << n); ++i) {
        vector<int> rows;
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                rows.push_back(j);
            }
        }

        int special = countSpecialColumns(matrix, rows);
        if (special > maxSpecial) {
            maxSpecial = special;
            bestRows = rows;
        }
    }

    return {maxSpecial, bestRows};
}
void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    pair<int, vector<int>> result = findMaxSpecialColumns(matrix);

    cout<< result.first << endl;
    for (int row : result.second) {
        cout << row + 1 << " ";
    }
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t; cin >> t; while (t--) solve(); return 0;
}