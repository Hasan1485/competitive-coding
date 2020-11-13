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
    vector<vector<int>> v(n + 1);
    v[0].push_back(1);
    v[0].push_back(1);
    for (int i = 0; i < 2 * n; i++) {
        int x;
        cin >> x;
        v[x].push_back(i + 1);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += abs(v[i][0] - v[i - 1][0]);
        ans += abs(v[i][1] - v[i - 1][1]);
    }
    cout << ans << endl;
}
signed main() {
    solve();
    return 0;
}