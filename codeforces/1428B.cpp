/*
author-sesky_crocodile
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool good = true, goodd = true;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '>') {
            good = false;
        }
        if (s[i] == '<') {
            goodd = false;
        }
    }
    if (good || goodd) {
        cout << n << endl;
    }
    else {
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '-' || s[(i + 1) % n] == '-') {
                ans++;
            }
        }
        cout << ans << endl;
    }
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}