#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cin >> a[i][j];
        }
    }

    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            int beauty = 0;
            for (int x = i, y = j; x < n && y < n; x++, y++)
            {
                beauty += a[x][y];
                pq.push(beauty);
                if (pq.size() > k)
                {
                    pq.pop();
                }
            }
        }
    }

    vector<int> result;
    while (!pq.empty())
    {
        result.push_back(pq.top());
        pq.pop();
    }

    reverse(result.begin(), result.end());
    for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
