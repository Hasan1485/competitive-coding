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
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    vector<int> ans;
    ans.push_back(a[0]);
    for (int i = 1; i < n; i++) {
        if (a[i] - a[i - 1] == 0) continue;
        ans.push_back(a[i] - a[i - 1]);
    }
    int len = ans.size();
    for (int i = 0; i < min(k, len); i++) {
        cout << ans[i] << endl;
    }
    for (int i = 0; i < k - ans.size(); i++) {
        cout << 0 << endl;
    }
}
signed main() {
    solve();
    return 0;
}