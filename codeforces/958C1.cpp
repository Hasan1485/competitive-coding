/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define OJ freopen("input.txt", "r", stdin);

inline void solve() {
    int n, p;
    cin >> n >> p;
    ll a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (i > 0) a[i] += a[i - 1];
    }
    ll ans = 0;
    for (int i = 0; i < n; ++i) {
        ans = max(ans, a[i] % p + (a[n - 1] - a[i]) % p);
    }
    cout << ans << endl;
}
signed main() {
    OJ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}