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
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int i = 1;
    int ans = 0;
    while (i < n - 1) {
        if (a[i] == 0 && a[i - 1] == 1 && a[i + 1] == 1) {
            a[i + 1] = 0;
            ans++;
            i += 2;
            continue;
        }
        i++;
    }
    cout << ans << endl;
}
signed main() {
    solve();
    return 0;
}