#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class UnionFind {
public:
    UnionFind(int n) : parent(n), rank(n, 1), count(n) {
        iota(parent.begin(), parent.end(), 0);
    }
    
    int find(int p) {
        if (parent[p] != p)
            parent[p] = find(parent[p]);
        return parent[p];
    }
    
    void unite(int p, int q) {
        int rootP = find(p);
        int rootQ = find(q);
        if (rootP != rootQ) {
            if (rank[rootP] > rank[rootQ]) {
                parent[rootQ] = rootP;
            } else if (rank[rootP] < rank[rootQ]) {
                parent[rootP] = rootQ;
            } else {
                parent[rootQ] = rootP;
                rank[rootP]++;
            }
            count--;
        }
    }
    
    int getCount() const {
        return count;
    }
    
private:
    vector<int> parent;
    vector<int> rank;
    int count;
};

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        
        for (int &x : a) {
            cin >> x;
        }
        
        UnionFind uf(n * n);
        auto index = [&](int i, int j) {
            return i * n + j;
        };
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                for (int di = -k; di <= k; ++di) {
                    for (int dj = -(k - abs(di)); dj <= (k - abs(di)); ++dj) {
                        int ni = (i + di + n) % n;
                        int nj = (j + dj + n) % n;
                        if (abs(di) + abs(dj) <= k && gcd(a[i], a[ni]) > 1) {
                            uf.unite(index(i, j), index(ni, nj));
                        }
                    }
                }
            }
        }
        
        vector<bool> componentMarked(n * n, false);
        int numComponents = 0;
        
        for (int i = 0; i < n * n; ++i) {
            int root = uf.find(i);
            if (!componentMarked[root]) {
                componentMarked[root] = true;
                numComponents++;
            }
        }
        
        cout << numComponents << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
    return 0;
}
