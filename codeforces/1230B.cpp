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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (s.length() == 1 && k != 0) {
        cout << 0 << endl;
        return;
    }
    if (s[0] != '1' && k != 0) {
        s[0] = '1';
        k--;
    }
    int pos = 1;
    while (k > 0 && pos < s.length()) {
        if (s[pos] != '0') {
            s[pos] = '0';
            k--;
            pos++;
        }
        else {
            pos++;
        }
    }
    cout << s << endl;
}
signed main() {
    solve();
    return 0;
}