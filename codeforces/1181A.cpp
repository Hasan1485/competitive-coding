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
    int x, y, z;
    cin >> x >> y >> z;
    int total = (x + y) / z;
    int t1 = x / z;
    int t2 = y / z;
    if (total == (t1 + t2)) {
        cout << total << " " << 0 << endl;
        return;
    }
    int temp = (ceil(1.0 * x / z) * z) - x;
    int tempp = (ceil(1.0 * y / z) * z) - y;
    cout << (x + y) / z << " " << (x % z == 0 || y % z == 0 ? 0 : min(temp, tempp));
}
signed main() {
    // OJ;
    solve();
    return 0;
}