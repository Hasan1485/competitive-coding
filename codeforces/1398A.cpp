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
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (a[n - 1] >= a[0] + a[1])
            cout << 1 << " " << 2 << " " << n << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}