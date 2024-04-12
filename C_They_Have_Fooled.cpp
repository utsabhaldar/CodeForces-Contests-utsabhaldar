#include <iostream>
using namespace std;

int main() {
    long n;
    cin >> n;

    int answer;
    switch (n) {
        case 0:
        case 1:
            answer = 10;
            break;
        case 2:
        case 4:
        case 12:
            answer = 8;
            break;
        case 3:
        case 10:
            answer = 9;
            break;
        case 5:
        case 6:
        case 7:
        case 8:
            answer = 7;
            break;
        case 9:
            answer = 0;
            break;
        default:
            answer = 6;
    }

    cout << answer << endl;

    return 0;
}
