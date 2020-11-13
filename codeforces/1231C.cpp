/*
author-sesky_crocdile
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
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            if (a[i][j] == 0) {
                a[i][j] = min(a[i + 1][j], a[i][j + 1]) - 1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++) {
            if (a[i][j] >= a[i][j + 1]) {
                cout << -1 << endl;
                return;
            }
        }
    }
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n - 1; i++) {
            if (a[i][j] >= a[i + 1][j]) {
                cout << -1 << endl;
                return;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ans += a[i][j];
        }
    }
    cout << ans << endl;
}
signed main() {
    solve();
    return 0;
}