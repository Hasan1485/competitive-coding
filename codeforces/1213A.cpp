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
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int ans = INT_MAX, cur = 0;
    for (int i = 0; i < n; ++i) {
        cur = 0;
        for (int j = 0; j < n; ++j) {
            if (abs(a[j] - a[i]) % 2) {
                cur++;
            }
        }
        ans = min(ans, cur);
    }
    cout << ans << endl;
}
signed main() {
    solve();
    return 0;
}