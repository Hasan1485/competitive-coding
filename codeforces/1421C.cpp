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
    string s;
    cin >> s;
    int n = s.length();
    cout << 3 << endl;
    cout << "R" << " " << n - 1 << endl;
    cout << "L" << " " << n << endl;
    cout << "L" << " " << 2 << endl;
}
signed main() {
    solve();
    return 0;
}