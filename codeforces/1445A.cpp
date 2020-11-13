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
    int n, x;
    cin >> n >> x;
    int a[n], b[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    sort(b, b + n, greater<int>());
    bool vis[n] = {0};
    int c = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!vis[j] && b[i] + a[j] <= x) {
                vis[j] = true;
                c++;
                break;
            }
        }
    }
    cout << (c == n ? "Yes" : "No") << endl;
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