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
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] != 1) {
            cout << (i % 2 == 0 ? "First" : "Second") << endl;
            return;
        }
    }
    cout << (n % 2 ? "First" : "Second") << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}