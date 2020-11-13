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
    int n;
    cin >> n;
    int s = 0, ss = 0;
    for (int i = 0; i < 2 * n; i++) {
        int x, y;
        cin >> x >> y;
        s += x, ss += y;
    }
    cout << s/n << " " << ss/n << endl;
}
signed main() {
    solve();
    return 0;
}