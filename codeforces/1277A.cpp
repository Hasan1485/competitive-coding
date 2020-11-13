/*
author-sesky_crocdile
once a crocodile
always a CROCODILE
*/
#include<bits/stdc++.h>
#define ll long long int
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
    int c = (int)log10(n);
    int ans = c * 9;
    // cout << c << endl;
    int k = (int)(n / pow(10, c));
    int temp = k;
    while (c > 0) {
        temp = (temp * 10) + k;
        c--;
    }
    // cout << temp << endl;
    if (n < temp) {
        cout << ans + k - 1 << endl;
        return;
    }
    cout << ans + k << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}