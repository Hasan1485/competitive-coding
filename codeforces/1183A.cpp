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
bool ok(int a) {
    int sum = 0;
    while (a) {
        sum += a % 10;
        a /= 10;
    }
    return sum % 4 == 0;
}
void solve() {
    int n;
    cin >> n;
    for (int i = n;; i++) {
        if (ok(i)) {
            cout << i << endl;
            return;
        }
    }   
}
signed main() {
    // OJ;
    solve();
    return 0;
}