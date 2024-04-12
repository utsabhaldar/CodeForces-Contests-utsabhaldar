#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){int n;
    cin >> n;
    int dig = to_string(n).length();
    int tmp = dig;
    int num = 0;

    while (dig > 0)
    {
        num = num * 10 + 1;
        dig--;
    }

    int extra = n / num;
    int ans = 9 * (tmp - 1) + extra;
    cout << ans << endl;}

    return 0;
}
