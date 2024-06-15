#include <iostream>
#include <string>

using namespace std;

int f(string a, string b) {
    if (a == "M") {
        if (b == "S" || b.find('X') != string::npos) {
            return -1;
        } else {
            return 1;
        }
    } else if (a == "S") {
        if (b == "M" || b.find('X') != string::npos) {
            return 1;
        } else {
            return -1;
        }
    } else if (a == "L") {
        if (b == "M" || b.find('X') != string::npos) {
            return 1;
        } else {
            return -1;
        }
    } else {
        if (b == "M" || b == "S" || a.size() > b.size() || (a.size() == b.size() && a < b)) {
            return -1;
        } else if (a.size() < b.size() || (a.size() == b.size() && a > b)) {
            return 1;
        } else {
            return 0;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        int result = f(a, b);
        if (result < 0) {
            cout << "<\n";
        } else if (result > 0) {
            cout << ">\n";
        } else {
            cout << "=\n";
        }
    }
    return 0;
}
