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
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == i + 1) {
            ans++;
            continue;
        }
        else {
            for (int j = 0; j < n; j++) {
                if (__gcd(i + 1, j + 1) == a[i]) {
                    if (a[j] == a[i]) {
                        ans++;
                    }
                }
            }
        }
    }
    if (ans == n) {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}