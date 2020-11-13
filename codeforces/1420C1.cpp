/*
author-sesky_crocdile
once a crocodile
always a CROCODILE
*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
void solve() {
    ll n, q;
    cin >> n >> q;
    ll a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll ans = 0;
    ll flip = 0;
    for (int i = 1; i < n; i++) {
        if (flip == 0) {
            if (a[i] < a[i - 1]) {
                ans += a[i - 1];
                flip = 1;
            }
        }
        else if (flip == 1) {
            if (a[i] > a[i - 1]) {
                ans -= a[i - 1];
                flip = 0;
            }
        }
    }
    if (flip == 0) {
        cout << ans + a[n - 1] << endl;
        return;
    }
    cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}