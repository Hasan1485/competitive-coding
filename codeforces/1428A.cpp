/*
author-sesky_crocodile
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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == c || b == d) {
        cout << abs(a - c) + abs(b - d) << endl;
    }
    else {
        cout << abs(a - c) + abs(b - d) + 2 << endl;
    }
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}