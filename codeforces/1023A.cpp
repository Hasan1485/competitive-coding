/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#define OJ freopen("input.txt", "r", stdin);
#define ll long long int;
const long long INF = 1e16;

#include<bits/stdc++.h>
using namespace std;

int n, m;
string s, t;

inline void solve() {
    cin >> n >> m;
    cin >> s >> t;
    int pos = -1;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '*') pos = i;
    }
    if (pos == -1) {
        cout << (s == t ? "YES" : "NO") << endl;
        return;
    }
    if (n - m > 1) {
        cout << "NO" << endl;
        return;
    }
    string s1, s2, s3, s4;
    s1 = s.substr(pos + 1);
    s2 = t.substr(pos + m - n + 1);
    s3 = s.substr(0, pos);
    s4 = t.substr(0, pos);
    cout << (s1 == s2 && s3 == s4 ? "YES" : "NO") << endl;
}
signed main() {
    // OJ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}