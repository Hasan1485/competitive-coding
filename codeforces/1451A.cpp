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
    int ans = 0;
    if (n == 1) {
        cout << 0 << endl;
    }
    else if (n == 2) {
        cout << 1 << endl;
    }
    else if (n % 2 == 0 || n == 3) {
        cout << 2 << endl;
    }
    else {
        cout << 3 << endl;
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