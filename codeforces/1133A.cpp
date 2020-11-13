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
    string s, ss;
    cin >> s >> ss;
    string hs, ms, hss, mss;
    hs = s.substr(0, 2), ms = s.substr(3);
    hss = ss.substr(0, 2), mss = ss.substr(3);
    int min1 = (stoi(hs) * 60) + stoi(ms);
    int min2 = (stoi(hss) * 60) + stoi(mss);
    int ans = min1 + abs(min1 - min2) / 2;
    int ansh = ans / 60;
    int ansm = ans % 60;
    int ansmm = ansm, anshh = ansh;
    int c = 0, d = 0;
    while (ansh > 0) {
        ansh /= 10;
        c++;
    }
    while (ansm > 0) {
        ansm /= 10;
        d++;
    }
    if (ansmm == 0) d = 1;
    if (anshh == 0) c = 1;

    if (c == 1) cout << 0 << anshh << ":";
    else if (c != 0) cout << anshh << ":";
    if (d == 1)cout << 0 << ansmm;
    else cout << ansmm;
}
signed main() {
    solve();
    return 0;
}