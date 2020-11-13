/*
author-sesky_crocdile
once a crocodile
always a CROCODILE
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
void solve() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int zero = 0;
    set<int> r, c;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 1)
                r.insert(i), c.insert(j);
        }
    }
    int mn = min(n - r.size(), m - c.size());
    cout << (mn % 2 == 0 ? "Vivek" : "Ashish") << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}