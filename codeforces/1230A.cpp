/*
author-sesky_crocdile
once a crocodile
always a CROCODILE
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a + b == c + d || a + c == b + d || a + d == b + c || a == b + c + d || b == a + c + d || c == a + b + d || d == a + b + c)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return;
}
int main() {
    solve();
    return 0;
}