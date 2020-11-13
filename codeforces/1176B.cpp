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
    int n;
    cin >> n;
    int cnt[3] = { 0 };
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        cnt[a % 3]++;
    }
    int ans = cnt[0];
    int h = min(cnt[1], cnt[2]);
    ans += h;
    cnt[1] -= h, cnt[2] -= h;
    ans += (cnt[1] + cnt[2]) / 3;
    cout << ans << endl;
}
signed main() {
    // OJ;
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}