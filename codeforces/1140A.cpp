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
    int a[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int ans = 0, i = 1;
    while (i <= n) {
        int mx = i;
        while (i <= n && i <= mx) {
            mx = max(mx, a[i]);
            i++;
        }
        ans++;
    }
    cout << ans << endl;
}
signed main() {
    solve();
    return 0;
}