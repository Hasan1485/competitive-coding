/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define OJ freopen("input.txt", "r", stdin);

inline void solve() {
    int x1, y1;
    cin >> x1 >> y1;
    int x2, y2;
    cin >> x2 >> y2;
    if (x1 != x2 && y1 != y2) {
        cout << ((abs(x1 - x2) + 1) * 2) + ((abs(y1 - y2) + 1) * 2);
    }
    else {
        if (x1 == x2 && y1 == y2) {
            cout << 10 << endl;
        }
        else {
            cout << (x1 == x2 ? (abs(y1 - y2) * 2) + 6 : (abs(x1 - x2) * 2) + 6);
        }
    }
}
signed main() {
    // OJ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}