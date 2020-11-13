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
    int ans = 0, a[32] = {0};
    for (int i = 0; i < n; ++i) {
        int x, sum = 0;
        cin >> x;
        while (x / 2 > 0) {
            x /= 2;
            sum++;
        }
        ans += a[sum];
        a[sum]++;
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