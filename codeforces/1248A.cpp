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
    int p[2] = {0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2) {
            p[1]++;
        }
        else {
            p[0]++;
        }
    }
    int m;
    cin >> m;
    int b[m];
    int q[2]=  {0};
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        if (b[i] % 2) {
            q[1]++;
        }
        else {
            q[0]++;
        }
    }
    cout << (p[1] * q[1]) + (p[0] * q[0]) << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}