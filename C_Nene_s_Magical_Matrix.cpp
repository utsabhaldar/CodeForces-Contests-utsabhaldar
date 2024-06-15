#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << n * n << " " << 2 * n << endl;
        for (int i = 1; i <= n; i++) {
            cout << "1 " << i;
            for (int j = 1; j <= n; j++) {
                cout << " " << j;
            }
            cout << endl;
        }
        for (int i = 1; i <= n; i++) {
            cout << "2 " << i;
            for (int j = 1; j <= n; j++) {
                cout << " " << j;
            }
            cout << endl;
        }
    }
    return 0;
}
