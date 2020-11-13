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
int prof(int b, int p, int f, int h, int c) {
    int ham = min(b / 2, p);
    b -= (ham * 2);
    int bur = min(b / 2, f);
    return ham * h + bur * c;
}
void solve() {
    int b, p, f, h, c;
    cin >> b >> p >> f >> h >> c;
    cout << max(prof(b, p, f, h, c), prof(b, f, p, c, h)) << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}