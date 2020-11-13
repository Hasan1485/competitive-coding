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
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v = { a, b, c };
    sort(v.begin(), v.end());
    int alice = v[0], bob = v[1], rem = v[2];
    int aliceGets = (rem / 2) + ((bob - alice + 1) / 2);
    int bobGets = bob + rem - aliceGets;
    aliceGets += alice;
    cout << min(aliceGets, bobGets) << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}