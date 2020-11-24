/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define OJ freopen("input.txt", "r", stdin);

int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
inline void solve() {
    int n, k;
    cin >> n >> k;
    int a[n * k];
    for (int i = 0; i < n * k; ++i) {
        cin >> a[i];
    }
    int m = n * k;
    int jump = n / 2 + 1, ans = 0;
    while (k--) {
        ans += a[m - jump];
        m -= jump;
    }
    cout << ans << endl;
}
signed main() {
    // OJ;
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}