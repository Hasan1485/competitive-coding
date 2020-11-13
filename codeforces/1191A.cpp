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
    int x;
    cin >> x;
    if (x % 4 == 0) {
        cout << 1 << " A";
    }
    else if (x % 4 == 1) {
        cout << 0 << " A";
    }
    else if (x % 4 == 2) {
        cout << 1 << " B";
    }
    else if (x % 4 == 3) {
        cout << 2 << " A";
    }
}
signed main() {
    // OJ;
    solve();
    return 0;
}