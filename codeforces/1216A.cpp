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
    int ans = 0;
    for (int i = 0; i < n; i += 2) {
        if (s[i] == s[i + 1]) {
            ans++;
            if (s[i + 1] == 'b') s[i] = 'a';
            else s[i] = 'b';
        }
    }
    cout << ans << endl << s << endl;
}
signed main() {
    solve();
    return 0;
}