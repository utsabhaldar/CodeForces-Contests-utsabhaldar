#include <bits/stdc++.h>
using namespace std;

void yes(bool t) { cout << (t ? "Yes" : "No") << endl; }

bool isOddSet(vector<int> a)
{
    int eve = 0;
    int n=a.size();
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            eve++;
    }
    if (eve == n/2)
        return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(2 * n);

        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
        }
        bool f = isOddSet(a);
        yes(f);
    }
    return 0;
}
