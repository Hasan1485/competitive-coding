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
    vector<int> a(n);
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    if (even % 2 != odd % 2) {
        cout << "NO" << endl;
    }
    else {
        if (even % 2 == 0) {
            cout << "YES" << endl;
        }
        else {
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (a[i] % 2 != a[j] % 2 && abs(a[i] - a[j]) == 1) {
                        cout << "YES" << endl;
                        return;
                    }
                }
            }
            cout << "NO" << endl;
        }
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