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
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += a[i];
    }
    cout << (sum == m ? "YES" : "NO") << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}