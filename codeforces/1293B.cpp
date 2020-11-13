/*
author-sesky_crocdile
once a crocodile
always a CROCODILE
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
void solve() {
    double n;
    cin >> n;
    double ans = 0.0;
    for (double i = 1; i <= n; i++) {
        ans += 1/i;
    }
    cout << fixed << setprecision(12) << ans << endl;
}
int main() {
    solve();
    return 0;
}