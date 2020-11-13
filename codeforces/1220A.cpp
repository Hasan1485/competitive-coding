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
    int n;
    string s;
    cin >> n >> s;
    int c = 0, d = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'z') ++c;
        if (s[i] == 'n') ++d;
    }
    for (int i = 0; i < d; ++i) {
        cout << 1 << " ";
    }
    for (int i = 0; i < c; ++i) {
        cout << 0 << " ";
    }
}
signed main() {
    solve();
    return 0;
}