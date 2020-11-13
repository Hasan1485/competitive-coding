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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b >= a) {
            cout << b << endl;
            continue;
        }
        if (c <= d) {
            cout << -1 << endl;
            continue;
        }
        int resets;
        if ((a - b) / (c - d) % 2 == 1)
            resets = (a - b) / (c - d) + 1;
        else
            resets = (a - b) / (c - d);
        cout << b + (resets * c) << endl;
    }
    return 0;
}