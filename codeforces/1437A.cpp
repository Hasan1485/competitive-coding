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
    int l, r;
    cin >> l >> r;
    int check = r + 1;
    if (l % check >= (double)check / 2 && r % check >= (double)check / 2) {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}