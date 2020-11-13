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
    int ans = INT_MAX, res = 0;
    for (int val = a[0]; val <= a[n - 1]; val++) {
        int cur = 0, temp = INT_MAX;
        for (int i = 0; i < n; i++) {
            temp = max(0LL, min(abs(a[i] - val - 1), abs(a[i] - val + 1)));
            temp = min(temp, abs(a[i] - val));
            cur += temp;
        }
        if (ans > cur) {
            ans = cur;
            res = val;
        }
    }
    cout << res << " " << ans << endl;
}
signed main() {
    solve();
    return 0;
}