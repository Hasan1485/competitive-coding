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
int smallestDivisor(int n) {
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }
    return n;
}
void solve() {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << n / 2 << endl;
        return;
    }
    bool ok = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            ok = true;
            break;
        }
    }
    if (!ok) { cout << 1 << endl; return; }
    cout << ((n - smallestDivisor(n)) / 2) + 1 << endl;
}
signed main() {
    solve();
    return 0;
}