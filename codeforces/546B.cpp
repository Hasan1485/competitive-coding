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
    scanf("%lld", &n);
    vector<int> a(n);
    set<int> s;
    for (int i = 0; i < n; ++i) {
        scanf("%lld", &a[i]);
        s.insert(a[i]);
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] == a[i + 1]) {
            int c = 1;
            while (s.find(a[i] + c) != s.end()) {
                ++c;
            }
            ans += c;
            s.insert(a[i] + c);
        }
    }
    printf("%lld", ans);
}
signed main() {
    // OJ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}