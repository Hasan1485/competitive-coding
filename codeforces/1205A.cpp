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
    if (n % 2) {
        cout << "YES" << endl;
        for (int i = 1; i <= n + n; i++) {
            if (i <= n) {
                cout << (i % 2 ? (2 * i) - 1 : 2 * i) << " ";
            }
            else {
                cout << (i % 2 ? (2 * (i - n)) - 1 : 2 * (i - n)) << " ";
            }
        }
    }
    else {cout << "NO" << endl; return;}
}
signed main() {
    solve();
    return 0;
}