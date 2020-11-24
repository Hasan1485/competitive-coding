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
    int n, c0, c1, h;
    cin >> n >> c0 >> c1 >> h;
    string s;
    cin >> s;
    int one = 0, zero = 0;
    for (int i = 0; i < n; ++i) {
        s[i] == '0' ? zero++ : one++;
    }
    if (c0 == c1) {
        cout << (zero * c0) + (one * c1) << endl;
        return;
    }
    else if (c0 < c1) {
        int first = (zero * c0) + (one * c1);
        int second = (one * h) + (n * c0);
        cout << min(first, second) << endl;
        return;
    }
    else {
        int first = (zero * c0) + (one * c1);
        int second = (zero * h) + (n * c1);
        cout << min(first, second) << endl;
        return;
    }
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