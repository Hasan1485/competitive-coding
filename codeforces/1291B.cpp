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
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int b = -1, c = n;
    for (int i = 0; i < n; ++i) {
        if (a[i] < i) break;
        b = i;
    }
    for (int i = n - 1; i >= 0; --i) {
        if (a[i] < n - 1 - i) break;
        c = i;
    }
    cout << (c <= b ? "Yes" : "No") << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}