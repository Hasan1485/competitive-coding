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
    int x, y;
    cin >> x >> y;
    if (x == y) {
        cout << "YES" << endl;
        return;
    }
    if (x == 2 && y == 3) {
        cout << "YES" << endl;
        return;
    }
    if ((x == 1 || x == 3 || x == 2) && x < y) {
        cout << "NO" << endl;
        return;
    } 
    cout << "YES" << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}