/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define OJ freopen("input.txt", "r", stdin);

inline void solve() {
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        s.insert(x);
    }
    cout << (s.size() == n ? "NO" : "YES") << endl;
}
signed main() {
    // OJ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}