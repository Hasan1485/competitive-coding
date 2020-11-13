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
bool dis(int n) {
    set<int> s;
    int c = floor(log10(n)) + 1;
    while (n > 0) {
        s.insert(n % 10);
        n /= 10;
    }
    return s.size() == c;
}
void solve() {
    int l, r;
    cin >> l >> r;
    while (l <= r) {
        if (dis(l)) {
            cout << l << endl;
            return;
        }
        ++l;
    }
    cout << -1 << endl;
}
signed main() {
    solve();
    return 0;
}