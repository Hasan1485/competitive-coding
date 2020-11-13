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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int cur = INT_MAX, ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        cur = min(cur - 1, a[i]);
        if (cur < 0) cur = 0;
        ans += cur;
    }
    cout << ans << endl;
}
signed main() {
    solve();
    return 0;
}