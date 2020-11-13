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
    int n; string s;
    cin >> n >> s;
    int must_have = s[n - 1];
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == must_have) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}