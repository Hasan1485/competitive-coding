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
    string s;
    cin >> s;
    vector<int> v;
    int len = -1, cur = 0, loss = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'W') {
            if (len != -1 && len + 1 != i) {
                v.push_back(i - len - 1);
            }
            len = i;
            cur++;
            if (i && s[i - 1] == 'W') {
                cur++;
            }
        }
        else {
            loss++;
        }
    }
    if (loss == n) {
        cout << max(0LL, 2 * k - 1) << endl;
        return;
    }
    int ans = cur;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        if (v[i] <= k) {
            ans += 2 * v[i] + 1;
            k -= v[i];
        }
        else {
            break;
        }
    }
    ans += (2 * k);
    cout << min(2 * n - 1, ans) << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}