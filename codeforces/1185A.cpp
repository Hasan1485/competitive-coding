/*
author-sesky_crocodile
once a crocodile
always a CROCODILE
*/
#include <cstdio>
#include<bits/stdc++.h>
#define int long long int
#define OJ freopen("input.txt", "r", stdin);
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<int> v = {a, b, c};
    sort(v.begin(), v.end());
    int ans = 0;
    if (v[1] - v[0] < d) {
        ans += d - (v[1] - v[0]);
    }
    if (v[2] - v[1] < d) {
        ans += d - (v[2] - v[1]);
    }
    cout << ans << endl;
}
signed main() {
    // OJ;
    solve();
    return 0;
}