/*
author-sesky_crocdile
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
    string s, ans = "";
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] > s[i + 1]) {
            for (int j = 0; j < n; j++) {
                if (j == i) continue;
                ans += s[j];
            }
            cout << ans << endl;
            return;
        }
    }
    // cout << s.substr(0, n - 1) << endl;
}
signed main() {
    solve();
    return 0;
}