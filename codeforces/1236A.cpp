/*
author-sesky_crocdile
once a crocodile
always a CROCODILE
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if (b == 0 || a == 0 && c == 0) {
        cout << 0 << endl;
        return;
    }
    int ans = 0, ok = 0;
    if (c >= 2 && b >= 1) {
        ans = min(b, (c / 2)) + min(b, (c / 2)) * 2;
        b -= c / 2;
    }
    if (b >= 2 && a >= 1) {
        ok = true;
        ans += min(a, (b / 2)) + min(a, (b / 2)) * 2;
        cout << ans << endl;
    }
    if (!ok)
        cout << ans << endl;
    return;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}