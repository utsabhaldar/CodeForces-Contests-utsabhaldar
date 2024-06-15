#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isInteresting(const vector<int>& arr, int l, int r) {
    int xorSegment = 0;
    for (int i = l; i <= r; i++) {
        xorSegment ^= arr[i];
    }
    int len = r - l + 1;
    if (xorSegment == 0) return true;
    int cnt = 0;
    for (int i = l; i < r; i++) {
        cnt ^= arr[i];
        if (cnt == 0 && i - l + 1 < len && (xorSegment ^ arr[i+1]) == 0 && (xorSegment ^ cnt) == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < q; i++) {
            int l, r;
            cin >> l >> r;
            l--; r--;
            if (isInteresting(arr, l, r)) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
