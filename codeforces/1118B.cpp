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
    int a[n];
    int Sodd = 0, Seven = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        i % 2 ? Sodd += a[i] : Seven += a[i];
    }
    int ans = 0;
    int Podd = 0, Peven = 0;
    for (int i = 0; i < n; i++) {
        i % 2 ? Sodd -= a[i] : Seven -= a[i];
        if (Sodd + Peven == Seven + Podd) {
            ans++;
        }
        i % 2 ? Podd += a[i] : Peven += a[i];
    }
    cout << ans << endl;
}   
signed main() {
    solve();
}