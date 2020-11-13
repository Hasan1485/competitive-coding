/*
author-sesky_crocodile
once a crocodile
always a CROCODILE
*/
#include <cstdio>
#include<bits/stdc++.h>
#define int long long int
#define OJ freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    if (min(a, b) >= n) cout << "Yes" << endl;
    else cout << "No" << endl;
}
signed main() {
    // OJ;
    solve();
    return 0;
}