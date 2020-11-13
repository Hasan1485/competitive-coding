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
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << x << " " << y << endl;
            y++;
            if (y > m) {
                y = 1;
            }
        }
        x++;
        y--;
        if (y == 0) {
            y = m;
        }
        if (x > n) {
            x = 1;
        }
    }
}
signed main() {
    solve();
    return 0;
}