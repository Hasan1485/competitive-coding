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
    int n, x;
    cin >> n >> x;
    if (n <= 2) {
        cout << 1 << endl;
        return;
    }
    if ((n - 2) % x == 0) {
        cout << ((n - 2) / x ) + 1 << endl;
    }
    else {
        cout << ((n - 2) / x) + 2 << endl;
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