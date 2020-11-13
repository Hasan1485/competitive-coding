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
    vector<int>a(n);
    set<int>s;
    int mx = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s.insert(a[i]);
        mx = max(a[i], mx);
    }
    int need;
    for (int i = 1; i > 0; i++) {
        if (pow(2, i) > mx) {
            need = i;
            break;
        }
    }
    set<int>ans;
    sort(a.begin(), a.end());
    for (int i = 1; i <= pow(2, need); i++) {
        for (int j = 0; j < n; j++) {
            ans.insert(a[j] ^ i);
        }
        bool ok = ans == s;
        if (ok) {
            cout << i << endl;
            return;
        }
        ans.clear();
    }
    cout << -1 << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}