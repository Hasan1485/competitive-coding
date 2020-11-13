/*
author-sesky_crocodile
once a crocodile
always a CROCODILE
*/
#include <cstdio>
#include<bits/stdc++.h>
#define int long long int
#define OJ freopen("input.txt", "r", stdin);
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
void solve() {
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    int i = 0; 
    while (i < s.length() && s[i] == '0') {
        ++i;
    }
    int ans = 0;
    bool ok = 0;
    while (i < s.length() && s[i] == '1') {
        ++i;
        ok = true;
    }
    if (ok) ans = a;
    int cur = 0;
    while (i < s.length()) {
        if (s[i] == '0') {
            ++cur;
        }
        else {
            ans += min(cur * b, a);
            cur = 0;
        }
        ++i;
    }
    cout << ans << endl;
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