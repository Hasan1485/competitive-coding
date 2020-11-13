/*
author-sesky_crocdile
once a crocodile
always a CROCODILE
*/
#include<bits/stdc++.h>
#define int long long int
#define INF 1e18;
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
void solve() {
    string s;
    cin >> s;
    int n = s.length();
    int cnt[4] = {};
    int ans = 10e6, l = 0;
    for (int r = 0; r < n; r++) {
        cnt[s[r] - '0']++;
        while (cnt[s[l] - '0'] > 1) {
            cnt[s[l] - '0']--;
            l++;
        }
        if (cnt[1] && cnt[2] && cnt[3]) {
            ans = min(ans, r - l + 1);
        }
    }
    cout << (ans == 10e6 ? 0 : ans) << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}