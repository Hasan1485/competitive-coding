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
    int n;
    cin >> n;
    int a[n];
    int c = 0, d = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] < 0) ++c;
        if (a[i] == 0) ++d;
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] == 0) ans++;
        else ans += abs(a[i]) - 1;
    }
    cout << (c % 2 && !d ? ans + 2 : ans) << endl;
}
signed main() {
    solve();
    return 0;
}