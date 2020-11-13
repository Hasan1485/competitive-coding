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
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int ans = 0;
    int j = 0;
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        while (j < n && a[j] - a[i] <= 5) {
            j++;
        }
        ans = max(ans, j - i);
    }
    cout << ans << endl;
}
signed main() {
    solve();
    return 0;
}