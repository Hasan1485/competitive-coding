/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define OJ freopen("input.txt", "r", stdin);

inline void solve() {
    ll l, r;
    cin >> l >> r;
    cout << "YES" << endl;
    for (ll i = l; i < r; i += 2) {
        cout << i << " " << i + 1 << endl;
    }
}
signed main() {
    // OJ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}