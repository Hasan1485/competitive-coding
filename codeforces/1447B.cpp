/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define OJ freopen("input.txt", "r", stdin);

int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
inline void solve() {
    int n, m;
    cin >> n >> m;
    int neg = 0, sum = 0, mn = 114;
    for (int i = 0; i < n * m; ++i) {
        int x;
        cin >> x;
        if (x <= 0) {
            ++neg;
        }
        mn = min(mn, abs(x));
        sum += abs(x);
    }
   if (neg % 2) cout << sum - (2 * mn) << endl;
   else cout << sum << endl;
}
signed main() {
    // OJ;
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}