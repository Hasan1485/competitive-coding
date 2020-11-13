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
    int n, m;
    cin >> n >> m;
    int k = n / m;
    int a[10];
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        a[i] = m * (i + 1) % 10;
        sum += a[i];
    }
    int rem = k % 10;
    int ans = (k / 10) * sum;
    for (int i = 0; i < rem; i++) {
        ans += a[i];
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