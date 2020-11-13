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
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll ans = 0;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] < 0) {
                a[n - 1] = a[n - 1] + a[i];
                ans = ans + (-a[i]);
                a[i] = 0;
            }
            else {
                a[i + 1] = a[i + 1] + a[i];
                a[i] = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}