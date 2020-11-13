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
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int ans = 0;
    while (true) {
        int mn = *min_element(a.begin(), a.end());
        ans++;
        int c = 0;
        if (mn == 101) break;
        for (int i = 0; i < n; ++i) {
            if (a[i] % mn == 0) {
                a[i] = 101;
            }
        }
    }
    cout << ans - 1 << endl;
}
signed main() {
    solve();
    return 0;
}