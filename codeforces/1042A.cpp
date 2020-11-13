/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define OJ freopen("input.txt", "r", stdin);

inline int max(vector<int> a) {
    return *max_element(a.begin(), a.end());
}
inline void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = a[n - 1] + m;
    int i = 0;
    bool cycle = 0;
    while (m > 0) {
        if (!cycle) {
            int subtract = max(a) - a[i];
            m -= subtract;
            a[i] += subtract;
            i++;
        }
        else {
            a[i]++;
            i++;
            m--;
        }
        if (i == n) {
            cycle = true;
            i = 0;
        }
    }
    cout << max(a) << " " << ans;
}
signed main() {
    // OJ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}