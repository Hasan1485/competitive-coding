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
    int n, x, m;
    cin >> n >> x >> m;
    int a = x, b = x;
    for (int i = 0; i < m; ++i) {
        int l, r;
        cin >> l >> r;
        if (max(a, l) <= min(b ,r)) {
            a = min(a, l);
            b = max(b, r);
        }
    }
    cout << b - a + 1 << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}