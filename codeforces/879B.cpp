/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define OJ freopen("input.txt", "r", stdin);


inline void solve() {
    ll n, k;
    cin >> n >> k;
    deque<int> d(n);
    for (int i = 0; i < n; ++i) {
        cin >> d[i];
    }
    if (k >= n - 1) {
        cout << *max_element(d.begin(), d.end());
        return;
    }
    int cur = 0;
    while (cur < k) {
        if (d[0] > d[1]) {
            int f = d[0], s = d[1];
            d.pop_front();
            d.pop_front();
            d.push_front(f);
            d.push_back(s);
            cur++;
        }
        else {
            int f = d[0];
            d.pop_front();
            d.push_back(f);
            cur = 1;
        }
    }
    cout << d[0];
}
signed main() {
    // OJ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}