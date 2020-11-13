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
    string s;
    cin >> s;
    set<int> ss;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (ss.find(s[i]) == ss.end()) {
            ss.insert(s[i]);
        }
        else if (ss.find(s[i]) != ss.end()) {
            int cur = ss.size();
            ans = max(ans, cur);
            ss.clear();
            ss.insert(s[i]);
        }
    }
    int last = ss.size();
    cout << max(ans, last) << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}