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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int odd = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] % 2) odd++;
    }
    if (odd < k || (odd - k) % 2) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        for (int i = 0; i < n; ++i) {
            if (k == 1) break;
            if (a[i] % 2) {
                cout << i + 1 << " ";
                --k;
            }
        }
        cout << n << endl;
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