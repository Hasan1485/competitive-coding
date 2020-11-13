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
    string s;
    cin >> s;
    int n = s.length();
    int i = 0;
    string ans = "";
    while (i < n) {
        if (s[i] != s[i + 1]) {
            ans += s[i];
            i++;
        }
        else {
            i += 2;
        }
    }
    set <char>ss(begin(ans), end(ans));
    for (auto i : ss) {
        cout << i;
    }
    cout << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}