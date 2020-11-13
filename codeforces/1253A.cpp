/*
author-sesky_crocdile
once a crocodile
always a CROCODILE
*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
void solve() {
    ll n;
    cin >> n;
    ll a[n];
    ll b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    ll first = 0, last = 0, need = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            need = abs(b[i] - a[i]);
            first = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] != b[i]) {
            last = i;
            break;
        }
    }
    for (int i = first; i <= last; i++) {
        a[i] += need;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}