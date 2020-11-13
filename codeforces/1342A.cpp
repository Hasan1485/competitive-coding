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
    ll x, y;
    cin >> x >> y;
    ll a, b;
    cin >> a >> b;
    if (2 * a <= b)
        cout << (x + y) * a << endl;
    else {
        ll ans = 0;
        if (x > y) {
            ans += (x - y) * a;
            x = y;
        }
        else if (x < y) {
            ans += (y - x) * a;
            y = x;
        }
        else {
            cout << y * b << endl;
            return;
        }
        cout << ans + (x * b) << endl;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}