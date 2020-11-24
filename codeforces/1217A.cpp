/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define OJ freopen("input.txt", "r", stdin);

int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
inline void solve() {
    int st, in, exp;
    cin>>st>>in>>exp;
    int s=st+in+exp;
    int mn=max(st,(s/2)+1);
    int mx=st+exp;
    printf("%lld\n",max(mx-mn+1,0LL));
}
signed main() {
    // OJ;
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}