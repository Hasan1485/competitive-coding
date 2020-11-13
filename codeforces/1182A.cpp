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
    if (n % 2) {
        cout << 0 << endl;
    }
    else {
        cout << (int) (pow(2, (n / 2))) << endl;
    }
}
signed main() {
    // OJ;
    solve();
    return 0;
}