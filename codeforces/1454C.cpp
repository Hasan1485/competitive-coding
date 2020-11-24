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
        map<int, int> each;
        for (int i = 0; i < n; ++i) {
                cin >> a[i];
                if (i > 0 && a[i] != a[i - 1]) {
                        each[a[i]]++;
                }
        }
        int ans = n;
        each[a[n - 1]]--;
        for (int i = 0; i < n; ++i) {
                ans = min(ans, each[a[i]] + 1);
        }
        cout << ans << endl;
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