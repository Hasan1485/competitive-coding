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
    int n;
    string s;
    cin >> n >> s;
    int c = 0;
    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i - 1]) {
            ++c;
        }
    }
    cout << (c + 1) / 2 << endl;
}
signed main() {
    OJ;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}