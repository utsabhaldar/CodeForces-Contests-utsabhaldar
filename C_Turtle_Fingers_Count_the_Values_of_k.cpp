#include <iostream>
using namespace std;

int countDistinctK(int a, int b, int l) {
    unordered_set<int> possibleK;
    for (int x = 0; a * (1 << x) <= l; ++x) {
        for (int y = 0; b * (1 << y) <= l; ++y) {
            int k = l / (a * (1 << x) * (b * (1 << y)));
            if (k * a * (1 << x) * b * (1 << y) == l) {
                possibleK.insert(k);
            }
        }
    }
    return possibleK.size();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, l;
        cin >> a >> b >> l;
        cout << countDistinctK(a, b, l) << endl;
    }
    return 0;
}
