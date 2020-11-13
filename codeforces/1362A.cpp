/*
author-sesky_crocdile
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
    int a, b;
    cin >> a >> b;
    if (b > a) {
        swap(a, b);
    }
    int ans = 0;
    while (a > b) {
        ans++;
        if (a % 8 == 0 && a / 8 >= b) {
            a/=8;
        }
        else if (a % 4 == 0 && a / 4 >= b) {
            a/=4;
        }
        else if (a % 2 == 0 && a / 2 >= b) {
            a/=2;
        }
        else {
            break;
        }
    }
    cout << (a == b ? ans : -1) << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}