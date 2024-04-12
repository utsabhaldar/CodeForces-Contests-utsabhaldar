#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *arr = new int[n];

        int sum = 0;
        for(int i=0; i<n; i++){
            int tmp;
            cin>>tmp;
            sum += abs(tmp);
        }
        
        cout << sum << endl;
    }

    return 0;
}
