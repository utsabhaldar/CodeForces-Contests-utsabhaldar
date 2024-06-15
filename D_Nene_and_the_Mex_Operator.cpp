#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& ai : a) cin >> ai;

    set<int> s(a.begin(), a.end());
    vector<int> ans;

    int mex = s.size();
    if (!s.count(mex)) ans.push_back(mex);

    int sum = accumulate(a.begin(), a.end(), 0);
    sum += mex * n; 

    cout << sum << " " << ans.size() << endl;
    for (int i = 0; i < ans.size(); ++i) {
        cout << "1 " << n << endl; 
    }
}
