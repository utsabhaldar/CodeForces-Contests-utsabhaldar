#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solveTestCase() {
    int n, m;
    cin >> n >> m;
    int totalCandidates = n + m + 1;
    
    vector<int> a(totalCandidates);
    vector<int> b(totalCandidates);
    
    for (int i = 0; i < totalCandidates; ++i) {
        cin >> a[i];
    }
    
    for (int i = 0; i < totalCandidates; ++i) {
        cin >> b[i];
    }
    
    // To store the current skill sums
    long long totalProgrammingSkill = 0;
    long long totalTestingSkill = 0;
    
    // To store the count of current assigned programmers and testers
    int programmers = 0;
    int testers = 0;
    
    // Determine initial assignment based on best fit
    vector<int> role(totalCandidates, -1); // -1 for unassigned, 0 for programmer, 1 for tester
    vector<pair<int, int>> bestFit(totalCandidates);
    
    for (int i = 0; i < totalCandidates; ++i) {
        if (a[i] > b[i]) {
            bestFit[i] = {a[i], 0}; // Prefer as programmer
        } else {
            bestFit[i] = {b[i], 1}; // Prefer as tester
        }
    }
    
    sort(bestFit.begin(), bestFit.end(), greater<pair<int, int>>());
    
    for (int i = 0; i < totalCandidates; ++i) {
        if (bestFit[i].second == 0 && programmers < n) {
            totalProgrammingSkill += bestFit[i].first;
            role[i] = 0;
            programmers++;
        } else if (bestFit[i].second == 1 && testers < m) {
            totalTestingSkill += bestFit[i].first;
            role[i] = 1;
            testers++;
        } else if (programmers < n) {
            totalProgrammingSkill += bestFit[i].first;
            role[i] = 0;
            programmers++;
        } else {
            totalTestingSkill += bestFit[i].first;
            role[i] = 1;
            testers++;
        }
    }
    
    for (int i = 0; i < totalCandidates; ++i) {
        if (role[i] == 0) {
            cout << totalProgrammingSkill - a[i] + (programmers > n ? b[i] : 0) << " ";
        } else {
            cout << totalTestingSkill - b[i] + (testers > m ? a[i] : 0) << " ";
        }
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solveTestCase();
    }
    return 0;
}
