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
    int n, m;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 1; i++) {
        if (v[i].second > v[i + 1].second) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    int x1 = 0, y1 = 0;
    string ans = "";
    for (int i = 0; i < n; i++) {
        for (int j = x1; j < v[i].first; j++) {
            ans.push_back('R');
        }
        x1 = v[i].first;
        for (int j = y1; j < v[i].second; j++) {
            ans.push_back('U');
        }
        y1 = v[i].second;
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