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
void solve() {
    int n;
    cin >> n;
    bool isPrime = 1;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            isPrime = false;
        }
    }
    if (isPrime) cout << 1 << " " << n - 1 << endl;
    else {
        for (int i = 2; i <= sqrt(n); ++i) {
            if (n % i == 0) {
                cout << (n / i) << " " << n - (n / i) << endl;
                break;
            }
        }
    }
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}