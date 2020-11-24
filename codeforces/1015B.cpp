/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define OJ freopen("input.txt", "r", stdin);

int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
int find(char c, string s) {
    int res = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == c) res = max(res, i);
    }
    return res;
}
inline void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    vector<int> ans;
    for (int i = 0; i < n; ++i) {
        if (a[i] != b[i]) {
            int pos = find(b[i], a);
            while (pos > i) {
                swap(a[pos], a[pos - 1]);
                ans.push_back(pos);
                --pos;
            }
        }
    }
    if (a != b) {
        cout << -1 << endl;
        return;
    }
    // cout << a << endl << b << endl;
    cout << ans.size() << endl;
    for (int i : ans) cout << i << " ";
}
signed main() {
    // OJ;
    solve();
    return 0;
}