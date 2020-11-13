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
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            vector<int> v(3);
            v[0] = a[i][j];
            v[1] = a[n - i - 1][j];
            v[2] = a[i][m - j - 1];
            sort(v.begin(), v.end());
            a[i][j] = a[n - i - 1][j] = a[i][m - j - 1] = v[1];
            ans += (v[1] - v[0]) + (v[2] - v[1]);
        }
    }
    cout << ans << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}