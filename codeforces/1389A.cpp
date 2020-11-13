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
        int l, r;
        cin >> l >> r;
        if (2 * l > r) {
            cout << -1 << " " << -1 << endl;
            continue;
        }
        cout << l << " " << 2 * l << endl;
    }
    return 0;
}