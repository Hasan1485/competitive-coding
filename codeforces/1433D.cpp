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
    set<int> ss;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        ss.insert(a[i]);
    }
    if (ss.size() == 1) { cout << "NO" << endl; return; }
    int s, pos;
    for (int i = 1; i < n; ++i) {
        if (a[i] != a[0]) {
            s = a[i];
            pos = i;
            break;
        }
    }
    s = pos + 1;
    cout << "YES" << endl;
    for (int i = 1; i < n; ++i) {
        if (a[i] == a[0]) cout << i + 1 << " " << s << endl;
        else cout << i + 1 << " " << 1 << endl;
    }
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}