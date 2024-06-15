#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[]={0,1,2,0,1,0,0,1};

        if(n<=7) cout<<a[n]<<endl;
        else cout<<0<<endl;
    }

    return 0;
}
