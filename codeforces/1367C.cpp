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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ans = 0;
    if (s[0] == '0') {
        ans++;
        s[0] = '1';
    }
    int lastPos = 0;
    for (int i = 1; i < n; ++i) {
        if (s[i] == '1') {
            if (i - lastPos <= k) {
                ans--;
            }
            lastPos = i;
        }
        else {
            if (i - lastPos > k) {
                ans++;
                lastPos = i;
            }
        }
    }
    cout << ans << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}