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
    int n, k;
    cin >> n >> k;
    vector<int> cnt(k);
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        ++cnt[x % k];
    }
    int ans = cnt[0] / 2;
    if (k % 2 == 0) ans += cnt[k / 2] / 2;
    for (int i = 1; i < (k + 1) / 2; ++i) {
        int j = k - i;
        ans += min(cnt[i], cnt[j]);
    }

    cout << ans * 2 << endl;
}
signed main() {
    solve();
    return 0;
}