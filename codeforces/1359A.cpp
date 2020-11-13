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
    int n, m, k;
    cin >> n >> m >> k;
    int a = n / k;
    if (a >= m)
        cout << m << endl;
    else {
        int d = a;
        int e = ceil(1.0 * (m - a) / (k - 1));
        cout << d - e << endl;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}