/*
author-sesky_crocdile
once a crocodile
always a CROCODILE
*/
#include<bits/stdc++.h>
#define int long long int
#define INF 1e18
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
    int mx1 = -10e9, mx2 = 0, i = 0;
    int ans = 0;
    while (i < n) {
        if (a[i] < 0) {
            mx1 = -10e9 + 1;
            while (a[i] < 0 && i < n) {
                mx1 = max(mx1, a[i]);
                i++;
            }
            ans += mx1;
        }
        else {
            mx2 = 0;
            while (a[i] > 0 && i < n) {
                mx2 = max(mx2, a[i]);
                i++;
            }
            ans += mx2;
        }
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