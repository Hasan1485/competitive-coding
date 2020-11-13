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
    int n; 
    cin >> n;
    int ans = 0, len = 1, temp = 1, req = 0;
    while (n > 0) {
        req = (len * (len + 1)) / 2;
        if (req > n) {
            break;
        }
        else {
            n -= req;
            temp *= 2;
            len += temp;
            ans++;
        }
    }
    cout << ans << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}