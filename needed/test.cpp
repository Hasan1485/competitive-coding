/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#define ll long long int
#define OJ freopen("input.txt", "r", stdin);
const long long INF = 1e16;

#include<bits/stdc++.h>
using namespace std;

int n;
inline void solve() {
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    set<int> s;
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0) {
            s.insert(a[i]);
        }
    }
    for (auto i : s) {
        cout << i << " ";
    }
    cout << endl;
}
signed main() {
    // OJ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}