/*
author-sesky_crocodile
once a crocodile, always a CROCODILE
*/
#define OJ freopen("input.txt", "r", stdin);
const int INF = 1e9;
#include<bits/stdc++.h>
using namespace std;

map<string, int> was;

inline int get(string s1, string s2) {
    if (!was.count(s1) || !was.count(s2)) {
        return INF;
    }
    return was[s1] + was[s2];
}
inline void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int c; string s;
        cin >> c >> s;
        sort(s.begin(), s.end());
        if (was.count(s) == 0) was[s] = c;
        else was[s] = min(was[s], c);
    }
    int ans = INF;
    if (was.count("A") && was.count("B") && was.count("C")) {
        ans = was["A"] + was["B"] + was["C"];
    }
    if (was.count("ABC")) {
        ans = min(ans, was["ABC"]);
    }
    ans = min(ans, get("A", "BC"));
    ans = min(ans, get("B", "AC"));
    ans = min(ans, get("C", "AC"));
    ans = min(ans, get("AB", "BC"));
    ans = min(ans, get("AC", "BC"));
    ans = min(ans, get("AC", "AB"));
    if (ans == INF) ans = -1;
    cout << ans << endl;
}
signed main() {
    // OJ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}