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
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]] = i + 1;
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int check = 0;
    for (int i = 0; i < n; i++) {
        if (mp[b[i]] >= check) {
            cout << mp[b[i]] - check << " ";
            check = mp[b[i]];
        }
        else {
            cout << 0 << " ";
        }
    }
}
signed main() {
    solve();
    return 0;
}