#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<char>> v(n, vector<char>(n));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                char ch;
                cin >> ch;
                v[i][j] = ch;
            }
        }

        string ans = "SQUARE";

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (v[i][j] == '1')
                {
                    if (v[i][j + 1] != '1')
                    {
                        ans = "TRIANGLE";
                        break;
                    }
                    else break;
                }
            }
        }

        cout<< ans << endl;
        
    }

    return 0;
}
