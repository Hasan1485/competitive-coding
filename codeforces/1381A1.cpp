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
    string a, b;
    cin >> a >> b;
    vector<int> ans;
    for (int i = 0; i < n; ++i) {
        if (a[i] != b[i]) {
            ans.push_back(i + 1);
            ans.push_back(1);
            ans.push_back(i + 1);
        }
    }
    cout << ans.size() << " ";
    for (int i : ans) {
        if (i != 0) cout << i << " ";
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