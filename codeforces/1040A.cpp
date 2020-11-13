/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define OJ freopen("input.txt", "r", stdin);

int n, a, b;
inline void solve() {
    cin >> n >> a >> b;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int i = 0, j = n - 1;
    int ans = 0;
    while (i < j) {
        if (v[i] == v[j]) {
            if (v[i] == 2) ans += (2 * min(a, b));
        }
        else {
            if (v[i] != 2 && v[j] != 2) {
                cout << -1; 
                return;
            }
            if (v[i] == 0 || v[j] == 0) ans += a;
            else ans += b;
        }
        ++i;
        --j;
    }
    if (v[i] == 2 && n % 2) ans += min(a, b);
    cout << ans << endl;
}
signed main() {
    // OJ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}