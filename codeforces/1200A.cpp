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
    int n;
    string s;
    cin >> n >> s;
    vector<int> ans(10, 0);
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'L') {
            int j = 0;
            while (ans[j]) {
                ++j;
            }
            ans[j] = 1;
        }
        else if (s[i] == 'R') {
            int k = 9;
            while (ans[k]) {
                --k;
            }
            ans[k] = 1;
        }
        else ans[s[i] - '0'] = 0;
    }
    for (int i = 0; i < 10; ++i) {
        cout << ans[i];
    }
}
signed main() {
    solve();
    return 0;
}