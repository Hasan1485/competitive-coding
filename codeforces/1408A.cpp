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
    int a[n], b[n], c[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> c[i];
    }
    cout << a[0] << " ";
    int prev = a[0];
    for (int i = 1; i < n - 1; ++i) {
        if (a[i] != prev) {
            cout << a[i] << " ";
            prev = a[i];
        }
        else if (b[i] != prev) {
            cout << b[i] << " ";
            prev = b[i];
        }
        else if (c[i] != prev) {
            cout << c[i] << " ";
            prev = c[i];
        }
    }
    if (a[n - 1] != a[0] && a[n - 1] != prev) {
        cout << a[n - 1] << " ";
    }
    else if (b[n - 1] != a[0] && b[n - 1] != prev) {
        cout << b[n - 1] << " ";
    }
    else if (c[n - 1] != a[0] && c[n - 1] != prev) {
        cout << c[n - 1] << " ";
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