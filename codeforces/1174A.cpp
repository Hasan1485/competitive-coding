/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define OJ freopen("input.txt", "r", stdin);

inline void solve() {
    int n;
    cin >> n;
    int a[2 * n];
    set<int> s;
    for (int i = 0; i < 2 * n ; ++i) {
        cin >> a[i];
        s.insert(a[i]);
    }
    if (s.size() == 1) {
        cout << -1 << endl;
        return;
    }
    sort(a, a + 2 * n);
    for (int i : a) {
        cout << i << " ";
    }
}
signed main() {
    // OJ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}