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
    sort(a, a + n);
    int ans[n];
    int l = 0, r = n - 1;
    for (int i = n - 1; i >= 0; i--) {
        if (i % 2) {
            ans[i] = a[l];
            l++;
        }
        else {
            ans[i] = a[r];
            r--;
        }
    }
    for (int a : ans) {
        cout << a << " ";
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