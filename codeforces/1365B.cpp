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
    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int c = 0, d = 0;
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        if (b[i] == 0) c++;
        else d++;
    }
    bool ok = 1;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] > a[i + 1]) {
            ok = 0;
        }
    }
    if (ok) { cout << "Yes" << endl; return; }
    if (c && d) cout << "Yes" << endl;
    else cout << "No" << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}