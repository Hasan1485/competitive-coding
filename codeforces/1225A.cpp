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
    int a, b;
    cin >> a >> b;
    if (a == 9 && b == 1) {
        cout << a << " " << 10 << endl;
        return;
    }
    if (b - a >= 2 || a > b) {
        cout << -1 << endl;
        return;
    }
    if (a + 1 == b) {
        cout << a << 9 << " " << b << 0 << endl;
    }
    else {
        cout << a << 1 << " " << b << 2 << endl;
    }
}
signed main() {
    solve();
    return 0;
}
