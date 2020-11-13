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
    int n, k;
    cin >> n >> k;
    int ans = INT_MAX;
    for (int rem = k - 1; rem > 0; rem--) {
        if (n % rem == 0) {
            ans = min(ans, rem + (n / rem) * k);
        }
    }
    cout << ans << endl;
}
signed main() {
    solve();
    return 0;
}