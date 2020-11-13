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
    cin >> n;
    string s;
    cin >> s;
    int moves = (n - 11) / 2;
    string ans = "";
    int c = moves, d = moves;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '8') {
            if (c > 0) c--;
            else ans += s[i];
        }
        else {
            if (d > 0) d--;
            else ans += s[i];
        }
    }
    cout << (ans[0] == '8' ? "YES" : "NO") << endl;
}
signed main() {
    solve();
    return 0;
}