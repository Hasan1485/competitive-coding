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
    int n, l, r;
    cin >> n >> l >> r;
    cout << (int)pow(2, l) - 1 + n - l << ' ';
    cout << (int)(pow(2, r) - 1 + ((n - r) * pow(2, r - 1)));
}
signed main() {
    solve();
    return 0;
}