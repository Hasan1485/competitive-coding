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
    string s;
    cin >> s;
    int n = s.length();
    int res = 0, cur = 0;
    for (int i = 0; i < n; ++i) {
        res++;
        if (s[i] == '+') {
            cur++;
        }
        else {
            cur--;
        }
        if (cur < 0) {
            cur = 0;
            res += i + 1;
        }
    }
    cout << res << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}