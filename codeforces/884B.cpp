/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define OJ freopen("input.txt", "r", stdin);

inline void solve() {
    int n, x;
    cin >> n >> x;
    int a[n];
    int s = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        s += a[i];
    }
    cout << (s + n - 1 == x ? "YES" : "NO") << endl;
}
signed main() {
    // OJ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}