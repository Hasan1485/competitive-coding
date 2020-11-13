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
    int mx = a[0];
    for (int i : a) mx = max(mx, a[i]);
    while (!a.empty()) {
        int cur = a[0], pos = 0;
        for (int i = 0; i < a.size(); ++i) {
            if (__gcd(cur, mx) < __gcd(a[i], mx)) { cur = a[i]; pos = i; }
        }
        a.erase(a.begin() + pos);
        if (cur == -1) break;
        cout << cur << " ";
        mx = __gcd(mx, cur);
    }
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}