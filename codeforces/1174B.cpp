/*
author-sesky_crocodile
once a crocodile
always a CROCODILE
*/
#include <cstdio>
#include<bits/stdc++.h>
#define int long long int
#define OJ freopen("input.txt", "r", stdin);
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int cnt[2] = { 0 };
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        cnt[a[i] % 2]++;
    }
    if (cnt[0] > 0 && cnt[1] > 0) {
        sort(a.begin(), a.end());
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
    }
    else {
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
    }
}
signed main() {
    // OJ;
    solve();
    return 0;
}