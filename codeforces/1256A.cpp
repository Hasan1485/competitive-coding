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
    int a, b, n, s;
    cin >> a >> b >> n >> s;
    int left;
    if (a * n <= s) {
        left = s - (a * n);
    }
    else {
        int rem = s / n;
        left = s - (rem * n);
    }
    int can = left - b;
    if (can <= 0) {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}