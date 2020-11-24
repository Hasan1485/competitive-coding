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
    int n, h, a, b, k;
    cin >> n >> h >> a >> b >> k;
    for (int i = 0; i < k; ++i) {
        int tower_initial, floor_initial, tower_final, floor_final;
        cin >> tower_initial >> floor_initial >> tower_final >> floor_final;
        if (tower_initial == tower_final) {
            cout << abs(floor_final - floor_initial) << endl;
            continue;
        }
        else {
            if (floor_initial >= a && floor_initial <= b) {
                if (floor_final == floor_initial) {
                    cout << abs(tower_initial - tower_final) << endl;
                }
                else {
                    cout << abs(tower_final - tower_initial) + abs(floor_initial - floor_final) << endl;
                }
            }
            else {
                if (abs(a - floor_initial) < abs(b - floor_initial)) {
                    cout << abs(a - floor_initial) + abs(tower_final - tower_initial) + abs(a - floor_final) << endl;
                }
                else {
                    cout << abs(b - floor_initial) + abs(tower_final - tower_initial) + abs(b - floor_final) << endl;
                }
                continue;
            }
        }
    }
}
signed main() {
    // OJ;
    solve();
    return 0;
}