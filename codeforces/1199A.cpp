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
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        bool one = true, two = true;
        for (int j = i; j <= min(n - 1, i + y); ++j) {
            if (a[i] > a[j]) one = false;
        }
        for (int j = i; j >= max(0LL, i - x); --j) {
            if (a[i] > a[j]) two = false;
        }
        if (one && two) { cout << i + 1 << endl; return; }
    }
}
signed main() {
    solve();
    return 0;
}