/*
author-sesky_crocodile
once a crocodile
always a CROCODILE
*/
#include<bits/stdc++.h>
#define int long long int
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == 0 && d == 0) {
        if (b % 2 == 0) {
            cout << "Tidak Tidak Ya Tidak" << endl;
        } else {
            cout << "Tidak Ya Tidak Tidak" << endl;
        }
    }
    else if (b == 0 && c == 0) {
        if (a % 2 == 0) {
            cout << "Tidak Tidak Tidak Ya" << endl;
        } else {
            cout << "Ya Tidak Tidak Tidak" << endl;
        }
    }
    else {
        if ((a + b) % 2 == 0) {
            cout << "Tidak Tidak Ya Ya" << endl;
        } else {
            cout << "Ya Ya Tidak Tidak" << endl;
        }
    }
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}