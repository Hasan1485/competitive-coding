/*
author-sesky_crocodile
once a crocodile
always a CROCODILE
*/
#include <cstdio>
#include<bits/stdc++.h>
#define int long long int
#define OJ freopen("input.txt", "r", stdin);
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
    cout << n/2 + 1 << endl;
    for(int i=1; i<=n; i++){
        cout << (i+1)/2 << " " << i/2 + 1 << endl;
    }
}
signed main() {
    // OJ;
    solve();
    return 0;
}