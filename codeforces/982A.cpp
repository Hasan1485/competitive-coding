/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#define ll long long int
#define OJ freopen("input.txt", "r", stdin);
const long long INF = 1e16;

#include<bits/stdc++.h>
using namespace std;

int n;
string s;
inline void solve() {
    cin >> n >> s;
    if (n == 1) {
        cout << (s[0] == '1' ? "Yes" : "No") << endl;
        return;
    }
    if (n == 2) {
        cout << (s[0] == s[1] ? "No" : "Yes") << endl;
        return;
    }
    if ((s[0] == s[1] || s[n-1] == s[n-2])) {
        cout << "No" << endl;
        return;
    }
    for (int i = 0; i < n - 2; ++i) {
        if (s[i] == '0' && s[i+1] == '0' && s[i+2] == '0') {
            cout << "No" << endl;
            return;
        }
        if (s[i] == '1' && s[i+1] == '1') {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}