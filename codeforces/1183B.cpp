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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int have = *min_element(a.begin(), a.end()) + k;
    for (int i = 0; i < n; ++i) {
        if (a[i] - k > have || a[i] + k < have) {
            cout << -1 << endl;
            return;
        }
    }
    cout << have << endl;
}
signed main() {
    OJ;
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}