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
int even(int n) {
    return n / 2;
}
int odd(int n) {
    return (n + 1) / 2;
}
int static r = start_up();
inline void solve() {
    int n, q;
    cin >> n >> q;
    if (n % 2 == 0) {
        for (int i = 0; i < q; ++i) {
            int row, col;
            cin >> row >> col;
            if ((row + col) % 2 == 0) {
                int every = (n + 1) / 2;
                int done_before = (row - 1) * every;
                int first = (row % 2 ? row + 1 : row + 2);
                int cur = row + col;
                int done_in = (cur - first) / 2;
                cout << done_before + done_in + 1 << endl;
            }
            else {
                int start = ((n * n) + 1) / 2;
                int every = n - ((n + 1) / 2);
                int done_before = (row - 1) * every;
                int first = (row % 2 ? row + 2 : row + 1);
                int cur = row + col;
                int done_in = (cur - first) / 2;
                cout << start + done_before + done_in + 1 << endl;
            }
        }
    }
    else {
        for (int i = 0; i < q; ++i) {
            int row, col;
            cin >> row >> col;
            if ((row + col) % 2 == 0) {
                int every_odd = (n + 1) / 2;
                int every_even = n / 2;
                int done_before_odd = odd(row - 1) * every_odd;
                int done_before_even = even(row - 1) * every_even;
                int first = (row % 2 ? row + 1 : row + 2);
                int cur = row + col;
                int done_in = (cur - first) / 2;
                cout << done_before_even + done_before_odd + done_in + 1 << endl;
            }
            else {
                int start = ((n * n) + 1) / 2;
                int every_odd = n - ((n + 1) / 2);
                int every_even = n - (n / 2);
                int done_before_odd = odd(row - 1) * every_odd;
                int done_before_even = even(row - 1) * every_even;
                int first = (row % 2 ? row + 2 : row + 1);
                int cur = row + col;
                int done_in = (cur - first) / 2;
                cout << start + done_before_even + done_before_odd + done_in + 1 << endl;
            }
        }
    }
}
signed main() {
    // OJ;
    solve();
    return 0;
}