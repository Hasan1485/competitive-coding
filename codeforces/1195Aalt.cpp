/*
author-sesky_crocodile
once a crocodile
always a CROCODILE
*/
#include <cstdio>
#include<bits/stdc++.h>
#define int long long int
#define OJ freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    bool vis[n] = { 0 };
    int good = 0, bad = 0;
    for (int i = 0; i < n; ++i) {
        bool hasPair = false;
        if (!vis[i]) {
            for (int j = i + 1; j < n; ++j) {
                if (!vis[j] && a[i] == a[j]) {
                    hasPair = true;
                    good += 2;
                    vis[i] = true;
                    vis[j] = true;
                    break;
                }
            }
        }
        if (!hasPair) bad++;
    }
    cout << good + ((bad + 1) / 2) << endl;
}
signed main() {
    OJ;
    solve();
    return 0;
}