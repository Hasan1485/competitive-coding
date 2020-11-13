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
    set<int> s;
    for (int i = 0; i < n; ++i) {
        int x; 
        cin >> x;
        if (i == 0) {
            if (x != 0) {
                cout << 1 << endl;
                return;
            }
            s.insert(x);
            continue;
        }
        if (s.find(x) == s.end() && x != *s.rbegin() + 1) {
            cout << i + 1 << endl;
            return;
        }
        s.insert(x);
    }
    cout << -1 << endl;
}
signed main() {
    // OJ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}