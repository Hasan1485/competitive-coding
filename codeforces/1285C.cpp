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
int lcm(int a, int b) {
    return (a / __gcd(a, b) * b);
}
void solve() {
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0 && lcm(i, n / i) == n) {
            ans = i;
        }
    }
    cout << ans << " " << n / ans << endl;
}
signed main() {
    solve();
    return 0;
}