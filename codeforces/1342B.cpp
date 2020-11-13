/*
author-sesky_crocdile
once a crocodile
always a CROCODILE
*/
#include<bits/stdc++.h>
#define int long long int
#define INF 1e18
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
    int i = 0;
    string ans = "";
    bool yes = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] != s[i + 1]) {
            yes = true;
        }
    }
    if (!yes) {
        cout << s << endl;
        return;
    }
    while (i < n) {
        if (i == n - 1) {
            ans.push_back(s[i]);
            i++;
        }
        else if (s[i] != s[i + 1]) {
            ans.push_back(s[i]);
            i++;
        }
        else {
            ans.push_back(s[i]);
            ans.push_back(s[i] == '1' ? '0' : '1');
            i++;
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