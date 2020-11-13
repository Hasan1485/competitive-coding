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
    int n, k, x, y;
    cin >> n >> k >> x >> y;
    if (x == y) {
        cout << "YES" << endl;
        return;
    }
    int cur = 0;
    for (int i = 1;; i++) {
        cur = (x + i * k) % n;
        if (cur == y) {
            cout << "YES" << endl;
            return;
        }
        if (cur == x) {
            break;
        }
    }
    cout << "NO" << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}