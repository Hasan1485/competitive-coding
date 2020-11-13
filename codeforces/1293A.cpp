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
    int n, s, k;
    cin >> n >> s >> k;
    vector<int>a(k);
    set<int> f;
    for (int i = 0; i < k; i++) {
        cin >> a[i];
        f.insert(a[i]);
    }
    int ans = 0;
    for (int i = 0; i <= k; i++) {
        if (f.find(s - i) == f.end() && s - i >= 1) {
            ans = i;
            break;
        }
        else if (f.find(s + i) == f.end() && s + i <= n) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}