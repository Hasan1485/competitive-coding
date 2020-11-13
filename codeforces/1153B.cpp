/*
author-sesky_crocodile
once a crocodile
always a CROCODILE
*/
#include<bits/stdc++.h>
#define int long long int
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
void solve() {
    int n, m, h;
    cin >> n >> m >> h;
    vector<int> f(m);
    for (int i = 0; i < m; ++i) {
        cin >> f[i];
    }
    vector<int> l(n);
    for (int i = 0; i < n; ++i) {
        cin >> l[i];
    }
    int t[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> t[i][j];
        }
    }
    vector<vector<int>> ans(n);
    for (int i = 0; i < n; ++i) {
        bool once = 0;
        for (int j = 0; j < m; ++j) {
            if (t[i][j] == 0) ans[i].push_back(0);
            else ans[i].push_back(min(f[j], l[i]));
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
signed main() {
    solve();
    return 0;
}