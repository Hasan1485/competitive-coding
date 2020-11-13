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
    int n, k, d;
    cin >> n >> k >> d;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int j = 0;
    int cur, ans = 100000;
    while (j <= n - d) {
        set<int>s;
        for (int i = j; i < j + d; i++) {
            s.insert(a[i]);
        }
        cur = s.size();
        ans = min(ans, cur);
        j++;
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