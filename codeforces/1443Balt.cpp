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
    int n = s.size();
    int first = -1, last = -1;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            first = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; --i) {
        if (s[i] == '1') {
            last = i;
            break;
        }
    }
    if (first == -1 && last == -1) {
        cout << 0 << endl;
        return;
    }
    int ans = a;
    for (int i = first; i <= last; ++i) {
        int c = 0;
        while (s[i] == '0') {
            ++i;
            ++c;
        }
        ans += min(c * b, a);
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