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
    vector<int>a(m);
    for (int i = 0; i < m; ++i){
        cin >> a[i];
    }
    map<char, int> mp;
    int cur = 0, ans = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            mp[v[j][i]]++;
        }
        int cur = 0;
        for (auto k : mp) {
            if (k.second > cur) cur = k.second;
        }
        ans += cur * a[i];
        mp.clear();
    }
    cout << ans << endl;
}
signed main() {
    solve();
    return 0;
}