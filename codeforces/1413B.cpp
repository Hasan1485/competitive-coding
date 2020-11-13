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
    int row[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> row[i][j];
        }
    }
    int col[m][n];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> col[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        int key = col[0][i];
        int cur = 0;
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < m; ++k) {
                if (row[j][k] == key) {
                    cur = j;
                    break;
                }
            }
        }
        for (int j = 0; j < m; ++j) {
            cout << row[cur][j] << " ";
        }
        cout << endl;
    }
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}