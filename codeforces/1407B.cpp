#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        int a[n];
        bool vis[n];
        for (ll i = 0; i < n; i++) {
            vis[i] = 0;
            cin >> a[i];
        }
        int r_gcd = 0;
        for (ll i = 0; i < n; i++) {
            ll targ = -1;
            for (ll j = 0; j < n; j++) {
                if (!vis[j]) {
                    if (targ == -1 || (__gcd(r_gcd, a[j])) > (__gcd(r_gcd, a[targ])))
                        targ = j;
                }
            }
            r_gcd = __gcd(r_gcd, a[targ]);
            cout << a[targ] << " ";
            vis[targ] = 1;
        }
        cout << endl;
    }
    return 0;
}