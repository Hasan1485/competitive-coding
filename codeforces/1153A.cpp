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
    int n, k;
    cin >> n >> k;
    int ans = INT_MAX, res = 0;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        while (a < k) {
            a += b;
        }
        if (ans > a) {
            ans = a;
            res = i + 1;
        }
    }
    cout << res << endl;
}
signed main() {
    solve();
    return 0;
}