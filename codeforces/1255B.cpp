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
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    if (m < n || n <= 2) {
        cout << -1 << endl;
        return;
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += a[i];
    }
    cout << ans * 2 << endl;
    for (int i = 1; i <= n; ++i) {
        cout << i << " " << i % n + 1 << endl;
    }
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}