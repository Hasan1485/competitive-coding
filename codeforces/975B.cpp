/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#define ll long long int
#define OJ freopen("input.txt", "r", stdin);
const long long INF = 1e16;

#include<bits/stdc++.h>
using namespace std;

inline void solve() {
    vector<int> a(14), b(14);
    for (int i = 0; i < 14; ++i) {
        cin >> a[i];
    }
    ll answer = 0;
    for (int i = 0; i < 14; ++i) {
        if (a[i] != 0) {
            b = a;
            int x = b[i] / 14, y = b[i] % 14;
            b[i] = 0;
            for (int j = 0; j < 14; ++j) {
                b[j] += x;
            }
            for (int j = 1; j <= y; ++j) {
                b[(i + j) % 14]++;
            }
            ll now = 0;
            for (int j = 0; j < 14; ++j) {
                if (b[j] % 2 == 0) {
                    now += b[j];
                }
            }
            answer = max(answer, now);
        }
    }
    cout << answer << endl;
}
signed main() {
    // OJ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}