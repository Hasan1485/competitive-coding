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
    int a, b, n, m;
    cin >> a >> b >> n >> m;
    if (m > min(a, b) || m + n > a + b) {
        cout << "No" << endl;
        return;
    }
    cout << "Yes" << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}