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
    int c, m, x;
    cin >> c >> m >> x;
    int f = min(x, min(c, m));
    c -= f;
    m -= f;
    x -= f;
    if (c == 0 || m == 0) {
        cout << f << endl;
        return;
    }
    if (c < m) {
        swap(c, m);
    }
    int dif = 0;
    if (m * 2 > c) {
        dif = c - m;
        c -= dif * 2;
        m -= dif;
    }
    else {
        cout << f + m << endl;
        return;
    }
    cout << f + dif + (2 * c) / 3 << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}