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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int mx = 0;
    for (int i = 0; i < n; i++) {
        mx = max(mx, a[i]);
    }
    int cur = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= mx) {
            ans = max(ans, ++cur);
        }
        else {
            cur = 0;
        }
    }
    cout << ans << endl;
}
signed main() {
    solve();
    return 0;
}