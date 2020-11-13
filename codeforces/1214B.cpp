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
    int b, g, n;
    cin >> b >> g >> n;
    cout << min(g, n) - (n - min(b, n)) + 1 << endl;
}
signed main() {
    solve();
    return 0;
}