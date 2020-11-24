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
    int n;
    cin >> n; 
    if (n == 2) {
        cout << 1 << endl << 2 << endl;
        return;
    }
    cout << n << endl;
    for (int i = 1; i <= n; ++i) {
        cout << i << " ";
    }
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