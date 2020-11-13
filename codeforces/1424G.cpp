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
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        mp[a]++;
        mp[b]--;
    }
    int cur = 0, ans = 0, ind = 0;
    for (auto i : mp) {
        cur += i.second;
        if (cur > ans) {
            ans = cur;
            ind = i.first;
        }
    }
    cout << ind << " " << ans << endl;
}
signed main() {
    solve();
    return 0;
}