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
    int n, x;
    cin >> n >> x;
    int a[n];
    int cur = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    int j = 1, sum = a[0], ans = 0;
    while (sum / j >= x && j <= n) {
        ans++;
        sum += a[j];
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