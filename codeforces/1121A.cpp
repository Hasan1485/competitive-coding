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
    int n, m, k;
    cin >> n >> m >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int b[n];
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    int ans = 0;
    while (k > 0) {
        int c;
        cin >> c;
        for (int i = 0; i < n; i++) {
            if (a[i] > a[c - 1] && b[i] == b[c - 1]) {
                ans++;
                break;
            }
        }
        k--;
    }
    cout << ans << endl;
}
signed main() {
    solve();
    return 0;
}