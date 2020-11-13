/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define OJ freopen("input.txt", "r", stdin);

inline void solve() {
    int n, l, a;
    cin >> n >> l >> a;
    int previous = 0, ans = 0, consumed = 0;
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        int interval = x - previous;
        ans += interval / a;
        previous = x + y;
    }
    cout << ans + ((l - previous) / a) << endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}