/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define int long long int;
#define OJ freopen("input.txt", "r", stdin);

void solve() {
    int a, b;
    cin >> a >> b;
    int k = a + b;
    for (int i = 2; i <= sqrt(k); ++i) {
        if (k % i == 0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << (a - b == 1 ? "YES" : "NO") << endl;
}
signed main() {
    // OJ;
    IOS;
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}