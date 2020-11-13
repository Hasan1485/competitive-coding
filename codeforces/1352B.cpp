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
    if (n % 2 == 1 && k % 2 == 0) {
        cout << "NO" << endl;
        return;
    }
    if (n % 2 == 0 && k % 2 == 1) {
        if (n < k * 2) {
            cout << "NO" << endl;
            return;
        }
        cout << "YES" << endl;
        for (int i = 1; i < k; i++) {
            cout << 2 << " ";
        }
        cout << n - ((k - 1) * 2) << endl;
    }
    else {
        if (n < k) {
            cout << "NO" << endl;
            return;
        }
        cout << "YES" << endl;
        for (int i = 1; i < k; i++) {
            cout << 1 << " ";
        }
        cout << n - (k - 1) << endl;
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