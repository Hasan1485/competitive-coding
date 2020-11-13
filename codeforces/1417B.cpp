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
    int n, T;
    cin >> n >> T;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    map<int, int>mc;
    map<int, int>md;
    for (int i = 0; i < n; i++) {
        if (mc[T - a[i]] > md[T - a[i]]) {
            md[a[i]]++;
        }
        else {
            mc[a[i]]++;
        }
    }
    vector<int>ans(n);
    for (int i = 0; i < n; i++) {
        if (mc[a[i]] > 0) {
            ans[i] = 0;
            mc[a[i]]--;
        }
        else {
            ans[i] = 1;
            md[a[i]]--;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
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