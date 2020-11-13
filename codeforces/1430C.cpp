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
    int n;
    cin >> n;
    cout << 2 << endl;
    if (n == 2) {
        cout << 1 << " " << 2 << endl;
        return;
    }
    cout << n << " " << n - 2 << endl;
    cout << n - 1 << " " << n - 1 << endl;
    for (int i = 1; i <= n - 3; i++) {
        cout << n - i << " " << n - i - 2 << endl;
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