/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#define ll long long int
#define OJ freopen("input.txt", "r", stdin);
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#include<bits/stdc++.h>
using namespace std;

inline void solve() {
    int n;
    cin >> n;
    if (n <= 2) {
        cout << "No" << endl;
        return;
    }
    cout << "Yes" << endl;
    int k = n % 2 ? (n + 1) / 2 : n / 2;
    cout << "1 " << k << endl;
    cout << n - 1 << " ";
    for (int i = 1; i <= n; ++i) {
        if (i == k) continue;
        cout << i << " ";
    }
    cout << endl;
}
signed main() {
    // OJ;
    IOS;
    solve();
    return 0;
}