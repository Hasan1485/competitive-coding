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
    int a1, a2, k1, k2, n;
    cin >> a1 >> a2 >> k1 >> k2 >> n;
    if (k1 > k2) {
        swap(k1, k2);
        swap(a1, a2);
    }
    int f = a1 * (k1 - 1);
    int s = a2 * (k2 - 1);
    if (f + s >= n) {
        cout << 0 << " ";
    }
    else {
        cout << n - (f + s) << " ";
    }
    if (n <= a1 * k1) {
        cout << n / k1 << endl;
    }
    else {
        cout << a1 + (n - (a1 * k1)) / k2;
    }
}
signed main() {
    solve();
    return 0;
}