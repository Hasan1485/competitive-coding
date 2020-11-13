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
    int n, d;
    cin >> n >> d;
    int cur = d;
    for (int i = 1; i <= sqrt(d) + 10; i++) {
        if (cur <= n) {  
            cout << "YES" << endl;
            return;
        }
        cur = i + (ceil((double)d / (i + 1)));
    }
    cout << "NO" << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}