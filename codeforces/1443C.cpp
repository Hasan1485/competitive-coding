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
void solve() {
    int n;
    cin >> n;
    vector<pair<int,int>>a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first;
    }
    for (int i = 0; i < n; ++i) {
        cin >> a[i].second;
    }
    sort(a.begin(), a.end());
    int sum = 0;
    int i = 0;
    for (i = n - 1; i >= 0; --i) {
        if (a[i].first >= a[i].second + sum) {
            sum += a[i].second;
        }
        else {
            break;
        }
    }
    if (i < 0) {
        printf("%lld\n", sum);
    }
    else {
        printf("%lld\n", max(a[i].first, sum));
    }
}
signed main() {
    // OJ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}