/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define OJ freopen("input.txt", "r", stdin);

int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
inline void solve() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;
        l--, r--;
        bool good = false;
        for (int i = 0; i < l; ++i) {
            if (s[i] == s[l]) good = true;
        }
        for (int i = r + 1; i < n; ++i) {
            if (s[i] == s[r]) good = true;
        }
        cout << (good ? "YES" : "NO") << endl;
    }
}
signed main() {
    // OJ;
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}