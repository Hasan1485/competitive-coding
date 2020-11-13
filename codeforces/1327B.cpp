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
    bool used[n + 1] = { 0 };
    int girl;
    bool bad = 0;
    for (int i = 1; i <= n; i++) {
        int k;
        cin >> k;
        vector<int>a(k);
        for (int j = 0; j < k; j++) {
            cin >> a[j];
        }
        bool ok = 0;
        for (int j = 0; j < k; j++) {
            if (!used[a[j]]) {
                ok = true;
                used[a[j]] = true;
                break;
            }
        }
        if (!ok) {
            bad = true;
            girl = i;
        }
    }
    if (!bad) {
        cout << "OPTIMAL" << endl;
        return;
    }
    cout << "IMPROVE" << endl;
    int boy;
    for (int i = 0; i < n + 1; i++) {
        if (!used[i] && i != 0) {
            boy = i;
        }
    }
    cout << girl << " " << boy << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}