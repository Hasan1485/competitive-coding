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
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; ++i) {
            a[i] = i;
    }
    for (int i = 1; i <= n; ++i) {
            if (i == n) {
                    cout << 1 << " ";
            }
            else if (a[i] == i) {
                    cout << a[i] + 1 << " ";
            }
    }
    cout << endl;
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