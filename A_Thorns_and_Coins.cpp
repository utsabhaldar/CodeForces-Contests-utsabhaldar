#include <bits/stdc++.h>
using namespace std;

int main() {
        
        int n;
        cin >> n;
        string s;
        cin>>s;

        int ans = 0;
        for (int i = 0; i < n-2;) {
            if(n==1){
                cout<<ans<<endl;
            }
            else if(s[i+1] == '@') {
                ans++;
                i++;
            }
            else if(s[i+2] == '@') {
                ans++;
                i+=2;
            }
            else break;
        }

        cout << ans << endl;

    return 0;
}
