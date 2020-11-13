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
    vector<string> v(n);
    for (int i = 0 ; i < n; ++i) {
        cin >> v[i];
    }
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1; j++) {
            if (v[i][j] == '1' && v[i][j + 1] == '0' && v[i + 1][j] == '0') {
                cout << "No" << endl;
                return;
            }
        }
    }
    cout << "Yes" << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}