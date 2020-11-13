/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define OJ freopen("input.txt", "r", stdin);

inline void solve() {
    int n;
    cin >> n;
    if (n == 1) {
        int x; cin >> x; cout << x << endl;
    }
    if (n == 2){
        int x, y;
        cin >> x >> y; cout << max(x, y) << endl;
    }
    if (n == 3) {
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a, a + n);
        cout << max(a[0] + a[1], a[2]) << endl;
    }
    if (n == 4) {
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a, a + n);
        int x = max(a[0] + a[1] + a[2], a[3]);
        int y = max(a[0] + a[3], a[1] + a[2]);
        cout << min(x, y) << endl;
    }
}
signed main() {
    // OJ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}