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
    int l = 0, r = n - 1;
    int ans = 3;
    while (l < r && s[l] == s[r] && ans >= 3) {
        char key = s[l];
        ans = 0;
        while (s[l] == key) {
            ++l;
            ++ans;
        }
        while (s[r] == key && r >= l) {
            --r;
            ++ans;
        }
    }
    cout << (l > r && ans >= 2 ? ans + 1 : 0) << endl;
}
signed main() {
    solve();
    return 0;
}