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
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }  
    int ans = a[0], c = 0, sum = 0;
    vector<int> pos;
    for (int i = 1; i < n; ++i) {
        if (a[i] > a[0] / 2) {
            sum += a[i];
            ++c;
            continue;
        }
        pos.push_back(i + 1);
        ans += a[i];
    }
    // cout << ans << endl << sum << endl << c << endl;
    if (c > n / 2 || ans <= sum) {
        cout << 0 << endl;
    }
    else {
        cout << pos.size() + 1 << endl;
        cout << 1 << " ";
        for (int i : pos) cout << i << " "; 
    }
}
signed main() {
    // OJ;
    solve();
    return 0;
}