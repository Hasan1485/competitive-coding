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
inline void solve(){
        int n, m;
        cin >> n >> m;
        int a[m];
        map<int, int> mp;
        for (int i = 0; i < m; ++i) {
                cin >> a[i];
                mp[a[i]]++;
        }
        int ans = 0;
        for (int days = 1; days <= 100; ++days) {
                map<int, int> m = mp;
                int for_this = 0;
                for (auto each : m) {
                        while (each.second >= days) {
                            each.second -= days;
                            for_this++;
                        }
                }
                if (for_this >= n) ans = max(ans, days);
        }
        cout << ans << endl;
}   
signed main(){
    solve();
    return 0;
}