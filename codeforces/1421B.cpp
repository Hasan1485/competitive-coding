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
    vector<string> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    vector<pair<int, int>> ans;
    if (v[0][1] == '1' && v[1][0] == '1' && v[n - 2][n - 1] == '0' && v[n - 1][n - 2] == '0') {
        cout << 0 << endl;
        return;
    }
    if (v[n - 2][n - 1] == v[n - 1][n - 2] && v[0][1] != v[1][0]) {
        if (v[0][1] == v[n - 2][n - 1]) {
            ans.push_back(make_pair(0, 1));
        }
        else if (v[1][0] == v[n - 2][n - 1]) {
            ans.push_back(make_pair(1, 0));
        }
    }
    else if (v[n - 2][n - 1] != v[n - 1][n - 2] && v[0][1] == v[1][0]) {
        if (v[0][1] == v[n - 2][n - 1]) {
            ans.push_back(make_pair(n - 2, n - 1));
        }
        else if (v[0][1] == v[n - 1][n - 2]) {
            ans.push_back(make_pair(n - 1, n - 2));
        }
    }
    else {
        if (v[0][1] != '0')
            ans.push_back(make_pair(0, 1));
        if (v[1][0] != '0')
            ans.push_back(make_pair(1, 0));
        if (v[n - 2][n - 1] != '1')
            ans.push_back(make_pair((n - 2), (n - 1)));
        if (v[n - 1][n - 2] != '1')
            ans.push_back(make_pair((n - 1), (n - 2)));
    }
    cout << ans.size() << endl;
    for (auto i : ans) {
        cout << i.first + 1 << " " << i.second + 1 << endl;
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