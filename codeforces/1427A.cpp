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
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    bool ok = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    if (sum == 0) { cout << "NO" << endl; return; }
    else { cout << "YES" << endl; sort(a.begin(), a.end()); }
    if (sum > 0) reverse(a.begin(), a.end());
    for (int i = 0; i < n; i++) cout << a[i] << " "; cout << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}