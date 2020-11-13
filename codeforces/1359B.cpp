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
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    char a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    if (m == 1) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == '.')
                    sum += x;
            }
        }
        cout << sum << endl;
        return;
    }
    int ans = 0;
    bool done[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            done[i][j] = false;
    bool better = 0;
    if (y < x * 2)
        better = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (j == m - 1 && !done[i][j]) {
                if (a[i][j] == '.')
                    ans += x;
            }
            else if (a[i][j] == '.' && a[i][j + 1] == '.' && !done[i][j]) {
                if (better) {
                    ans += y;
                    done[i][j + 1] = true;
                    continue;
                }
                else {
                    ans += x;
                    continue;
                }
            }
            else if (a[i][j] == '.' && a[i][j + 1] == '*' && !done[i][j]) {
                ans += x;
                continue;
            }
        }
    }
    cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}