#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
int sum(ll n) {
    ll sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, s;
        cin >> n >> s;
        if (sum(n) <= s)
            cout << 0 << endl;
        else {
            ll dig = 0;
            ll diff = sum(n) - s;
            ll moves = 1;
            ll ans = 0;
            while (diff > 0) {
                dig = (n / moves) % 10;
                ll su = moves * (10 - dig);
                ans += su;
                n += su;
                diff = sum(n) - s;
                moves *= 10;
            }
            cout << ans << endl;
        }
    }
    return 0;
}