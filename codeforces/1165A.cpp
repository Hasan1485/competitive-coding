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
    int n, x, y;
    string s;
    cin >> n >> x >> y >> s;
    int ans = 0;
    for (int i = n - x; i < n; ++i) {
        if (i == n - y - 1) ans += s[i] != '1';
        else ans += s[i] != '0';
    }
    cout << ans << endl;
}
signed main() {
    solve();
    return 0;
}