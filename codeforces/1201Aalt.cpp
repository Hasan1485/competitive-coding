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
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    vector<int> a(m);
    for (int i = 0; i < m; ++i) {
        cin >> a[i];
    }
    string s = " "; char c = 'A';
    for (int i = 0; i < m; ++i) {
        s.push_back(c);
        ++c;
    }
    int ans = 0;
    do {
        int cur = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (v[i][j] == s[j]) {
                    cur += a[j];
                }
            }
        }
        ans = max(ans, cur);
    }
    while (next_permutation(s.begin(), s.end()));
    cout << ans << endl;
}
signed main() {
    solve();
    return 0;
}