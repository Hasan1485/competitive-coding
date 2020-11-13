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
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int cur = 1, ans = 0;
    int i = 1;
    while (i < n) {
        if (a[i] != a[i - 1]) { cur++; i++; }
        else { ans = max(ans, cur); cur = 1; i++; }
    }
    cout << max(cur, ans) << endl;
}
signed main() {
    solve();
    return 0;
}