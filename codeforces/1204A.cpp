/*
author-sesky_crocdile
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
    string s;
    cin >> s;
    int l = s.length();
    for (int i = l - 1; i > 0; i--) {
        if (s[i] == '1') {
            l++;
            break;
        }
    }
    cout << l / 2 << endl;
}
signed main() {
    solve();
    return 0;
}