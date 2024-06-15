#include <iostream>
#include <vector>
using namespace std;

string winner(vector<int>& piles) {
    int xor_sum = 0;
    for (int pile : piles) {
        xor_sum ^= pile;
    }
    return xor_sum == 0 ? "Bob" : "Alice";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> piles(n);
        for (int i = 0; i < n; i++) {
            cin >> piles[i];
        }
        cout << winner(piles) << endl;
    }
    return 0;
}
