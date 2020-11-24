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
    int ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    if ((bx - ax) * (cx - ax) > 0 && (by - ay) * (cy - ay) > 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
signed main() {
    // OJ;
    solve();
    return 0;
}