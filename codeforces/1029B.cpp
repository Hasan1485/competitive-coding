/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define OJ freopen("input.txt", "r", stdin);

int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
inline void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int j = i;
        while (j + 1 < n && a[j + 1] <= a[j] * 2) {
            ++j;
        }
        ans = max(ans, j - i + 1);
        i = j;
    }
    cout << ans << endl;
}
signed main() {
    // OJ;
    solve();
    return 0;
}