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
    int n, x;
    cin >> n >> x;
    vector<int>dif;
    bool done=false;
    for(int i=0; i<n; ++i) {
        int a, b;
        cin >> a >> b;
        if(a >= x) {
            printf("%lld\n",1);
            done=true;
        }
        else if(a > b) {
            dif.push_back(a-b);
        }
    }
    cout << "YAY" << endl;
    if(done) return;
    if(dif.empty()) {
        printf("%lld\n",-1);
        return;
    }
    sort(dif.rbegin(),dif.rend());
    cout << dif[0] << endl;
    int ans=0;
    while(x>0){
        ans++;
        x-=dif[0];
    }
    printf("%lld\n",ans);
}
signed main() {
    OJ;
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}