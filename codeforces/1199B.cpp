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
    cout << setprecision(15);
    return 0;
}
int static r = start_up();
void solve() {
    int h, l;
    cin >> h >> l;
    cout << ((double)(l * l) - (h * h)) / (2 * h) << endl;
}
signed main() {
    solve();
    return 0;
}