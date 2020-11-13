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
        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        ll ans = INT_MAX;
        for (int i = 0;i < 2;i++) {
            int da = min(n, a - x);
            int db = min(n - da, b - y);
            ans = min(ans, ((a - da) * (b - db)));
            swap(a, b);
            swap(x, y);
        }
        cout << ans << endl;
    }
    return 0;
}