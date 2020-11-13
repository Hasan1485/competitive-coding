/*
author-sesky_crocodile
once a crocodile
always a CROCODILE
*/
#include <cstdio>
#include<bits/stdc++.h>
#define int long long int
#define OJ freopen("input.txt", "r", stdin);
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
    int ans = 1; 
    for (int i = 2; i <= n; ++i) { 
        ans += 4 * (i - 1);
    }
    cout << ans;
}
signed main() {
    // OJ;
    solve();
    return 0;
}