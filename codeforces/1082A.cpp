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
    int n, x, y, d;
    cin >> n >> x >> y >> d;
    if (abs(x - y) % d == 0) {
        cout << abs(x - y) / d << endl;
        return;
    }
    int ans = 10e9 + 5;
    if ((y - 1) % d == 0) {
        int f = (x - 1) / d;
        if ((x - 1) % d) f++;
        ans = min(ans, f + ((y - 1) / d));
    }
    else if ((n - y) % d == 0) {
        int f = (n - x) / d;
        if ((n - x) % d) f++;
        ans = min(ans, (f + (n - y) / d));
    }
    else {
        ans = -1;
    }
    cout << ans << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}