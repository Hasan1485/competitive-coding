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
    string s;
    cin >> s;
    int n = s.length();
    int ans = 0;
    int open_till = 0, open_till_weird = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '(') {
            open_till++;
        }
        else if (s[i] == ')') {
            if (open_till > 0) {
                open_till--;
                ans++;
            }
        }
        if (s[i] == '[') {
            open_till_weird++;
        }
        else if (s[i] == ']') {
            if (open_till_weird > 0) {
                open_till_weird--;
                ans++;
            }
        }
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