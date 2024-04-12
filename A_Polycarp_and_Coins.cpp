#include <bits/stdc++.h>
using namespace std;
// #define long long ll

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a = n / 3;
        if (n % 3 == 0)
        {
            cout << a << " " << a << "\n";
        }
        else
        {
            if (((a) + 2 * (a + 1)) == n)
                cout << a << " " << a + 1 << "\n";
            else
                cout << a + 1 << " " << a << "\n";
        }
    }

    return 0;
};