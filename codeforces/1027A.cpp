/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define OJ freopen("input.txt", "r", stdin);

int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
inline void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] == s[n - i - 1]) {
            continue;
        }
        else {
            if (s[i] + 1 == s[n - i - 1] - 1 || s[i] - 1 == s[n - i - 1] + 1) {
                continue;
            }
            else {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}
signed main() {
    // OJ;
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}