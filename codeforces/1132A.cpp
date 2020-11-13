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
    if (a == d) {
        if (a == 0) {
            if (c != 0) {
                cout << 0 << endl;
            }
            else {
                cout << 1 << endl;
            }
        }
        else {
            cout << 1 << endl;
        }
    }
    else {
        cout << 0 << endl;
    }
}
signed main() {
    solve();
    return 0;
}