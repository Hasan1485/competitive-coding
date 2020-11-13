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
    bool yes = 0;
    for (int i = 0; i < n; i++) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        if (a2 == b1) {
            yes = true;
        }
    }
    if (m % 2 == 1) {
        cout << "NO" << endl;
        return;
    }
    if (yes) {
        cout << "YES" << endl;
        return;
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