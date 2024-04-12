#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cnt =0;
        int cnt2 =0;

        for (int i=0; i<s.size(); i++)
        {
            if(s[i]=='A')cnt++;
            else cnt2++;
        }
        char ans =  cnt>cnt2 ? 'A':'B';
        
        cout << ans << endl;
    }

    return 0;
}
