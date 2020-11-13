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
    int n, v, l, r;
    cin >> n >> v >> l >> r;
    cout << (l % v == 0 ? (n / v) - ((r / v) - (l / v) + 1) : (n / v) - ((r / v) - (l / v)));
    cout << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}