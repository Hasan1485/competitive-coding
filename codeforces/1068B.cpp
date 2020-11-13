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
    int b;
    cin >> b;
    int ans = 0;
    for (int i = 1; i <= sqrt(b); i++) {
        if (b % i == 0) {
            if (b / i == i) {
                ans++;
            }
            else {
                ans += 2;
            }
        }
    }
    cout << ans << endl;
}
signed main() {
    solve();
    return 0;
}