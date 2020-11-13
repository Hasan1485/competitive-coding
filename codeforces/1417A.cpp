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
    vector<int>a(n);
    int mn = 1000000;
    int pos = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i]; // 1 2 3 
        if (a[i] < mn) {
            mn = a[i];
            pos = i;
        }
    }
    // cout << mn << endl;
    a.erase(a.begin() + pos);
    int ans = 0;
    for (int i = 0; i < a.size(); i++) {
        // cout << k - a[i] << endl;
        ans += (k - a[i]) / mn;
    }
    cout << ans << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}