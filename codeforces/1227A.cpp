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
    int n;
    cin >> n;
    int lmx = 0, rmy = 10e9 + 5;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        lmx = max(lmx, x);
        rmy = min(rmy, y);
    }
    cout << max(0LL, lmx - rmy) << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}