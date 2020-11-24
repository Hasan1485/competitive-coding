/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define OJ freopen("input.txt", "r", stdin);

int start_up(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
inline void solve() {
    int n;
    cin >> n;
    int a[n];
    map<int, int> mp;
    map<int, int> index;
    for (int i = 0; i < n; ++i) {
            cin >> a[i];
            index[a[i]] = i;
            mp[a[i]]++;
    }
    int mn = INT_MAX, ans = 0;
    bool has = 0;
    for (auto i : mp) {
            if (i.second == 1) {
                    mn = min(mn, i.first);
                    has = true;
            }
    }
    ans = index[mn];
    if (has) cout << ans + 1 << endl;
    else cout << -1 << endl;
}
signed main(){
    // OJ;
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}