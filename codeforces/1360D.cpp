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
    int n, k;
    cin >> n >> k;
    int ans = 0;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            if (i <= k) {
                ans = max(ans, i);
            }
            if (n / i <= k) {
                ans = max(ans, n / i);
            }
        }
    }
    cout << n / ans << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}