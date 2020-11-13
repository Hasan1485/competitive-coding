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
    int n;
    cin >> n;
    vector<int> v(n);
    set<int> s;
    int mx = 0, pos = 0;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        s.insert(v[i]);
        mx = max(mx, v[i]);
    }
    if (s.size() == 1) { cout << -1 << endl; return; }
    int ans = 0;
    for (int i = 1; i < n - 1; i++) {
        if ((v.at(i) == mx && v.at(i - 1) != mx) || (v.at(i) == mx && v.at(i + 1) != mx)) {
            cout << (i + 1) << endl;
            return;
        }
    }
    if (v.at(0) == mx && v.at(1) != mx) {
        cout << 1 << endl;
        return;
    }
    if (v.at(n - 1) == mx && v.at(n - 2) != mx) {
        cout << n << endl;
        return;
    }
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}