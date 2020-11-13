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
    int n; string s;
    cin >> n >> s;
    int cur = 0, ans = INT_MAX;
    for (int i = 0; i < n; ++i) {
        string temp = s.substr(i, 4); 
        cur = 0;
        if (temp.size() == 4) {
            cur += min(abs(temp[0] - 'A'), 26 - abs(temp[0] - 'A')); 
            cur += min(abs(temp[1] - 'C'), 26 - abs(temp[1] - 'C'));
            cur += min(abs(temp[2] - 'T'), 26 - abs(temp[2] - 'T'));
            cur += min(abs(temp[3] - 'G'), 26 - abs(temp[3] - 'G'));
        }
        else continue;
        ans = min(ans, cur);
    }
    cout << ans << endl;
}
signed main() {
    solve();
    return 0;
}