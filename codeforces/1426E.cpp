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
    int ar, as, ap, br, bs, bp;
    cin >> ar >> as >> ap >> br >> bs >> bp;
    int car = ar, cas = as, cap = ap, cbr = br, cbs = bs, cbp = bp;
    ar -= min(ar, bp);
    as -= min(as, br);
    ap -= min(ap, bs);

    bp -= min(ar, bp);
    br -= min(as, br);
    bs -= min(ap, bs);

    ar -= min(ar, br);
    as -= min(as, bs);
    ap -= min(ap, bp);

    cout << ar + as + ap << " ";
    cout << min(car,cbs) + min(cap,cbr) + min(cas, cbp) << endl;
}
signed main() {
    solve();
    return 0;
}