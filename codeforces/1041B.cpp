/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define OJ freopen("input.txt", "r", stdin);

inline void solve() {
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    ll gcd = __gcd(x, y);
    x /= gcd, y /= gcd;
    // cout << x << " " << y << endl;
    cout << min(a / x, b / y) << endl;
}
signed main() {
    // OJ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}