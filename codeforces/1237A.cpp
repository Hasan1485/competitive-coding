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
    int ans = 1;
    for (int i =0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 == 0) {
            cout << x / 2 << endl;
        }
        else {
            cout << (x + ans)/2 << endl;
            ans *= -1;
        }
    }
}
signed main() {
    solve();
    return 0;
}