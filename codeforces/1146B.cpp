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
    string cur;
    int n = s.length();
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'a') {
            cnt++;
        }
    }
    if (cnt == n) {
        cout << s << endl;
        return;
    }
    else if (cnt == 0) {
        string cur, ans;
        for (int i = 0; i < n; ++i) {
            if (s.substr(i) == cur) {
                ans = cur;
            }
            else {
                cur.push_back(s[i]);
            }
        }
        if (ans.empty()) cout << ":(" << endl;
        cout << ans << endl;
        return;
    }
    int ind = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'a') {
            ind = i;
        }
    }
    for (int i = 0; i < ind; ++i) {
        if (s[i] != 'a') {
            cur.push_back(s[i]);
        }
    }
    string ans;
    for (int i = ind + 1; i < n; ++i) {
        if (cur == s.substr(i)) {
            ans = s.substr(0, i);
        }
        else {
            cur.push_back(s[i]);
        }
    }
    if (ans.empty()) cout << ":(" << endl;
    else cout << ans << endl;
}
signed main() {
    solve();
    return 0;
}