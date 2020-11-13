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
    int n, x, y;
    cin >> n >> x >> y;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        if (p <= x) {
            ans++;
        }
    }
    cout << (x > y ? n : (ans + 1) / 2) << endl;
}
signed main() {
    solve();
    return 0;
}