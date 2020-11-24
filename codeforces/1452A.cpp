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
    int x, y;
    cin >> x >> y;
    if (x != y)
        cout << (x + y) + abs(x - y) - 1 << endl;
    else 
        cout << (x + y) + abs(x - y) << endl;
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