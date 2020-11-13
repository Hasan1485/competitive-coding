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
int findY(int r, int x) {
    if ((r - 1) % x || (((r - 1) / x) - 1 - x) % 2) {
        return 0;
    }
    int ans = ((((r - 1) / x) - 1 - x) / 2);
    return ans;
}
void solve() {
    int r;
    cin >> r;
    for (int x = 1; x <= sqrt(r); ++x) {
        if (findY(r, x) > 0) {
            cout << x << " " << findY(r, x) << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
signed main() {
    // OJ;
    solve();
    return 0;
}