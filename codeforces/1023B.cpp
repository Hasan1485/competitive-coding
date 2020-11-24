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
    int n, k;
    cin >> n >> k;
    if (k > n) {
        int first = k - n;
        if (first >= n) {
            cout << 0 << endl;
            return;
        }
        int gap = (n - first) + 1;
        cout << max(0LL, gap / 2);
    }
    else {
        if (k % 2 == 0) cout << (k / 2) - 1;
        else cout << k / 2;
    }
}
signed main() {
    solve();
    return 0;
}