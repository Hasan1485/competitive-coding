/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define OJ freopen("input.txt", "r", stdin);

int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
inline void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    string ans;
    int open_must = k / 2;
    int closed_must = k / 2;
    int open = 0, close = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '(' && open < open_must) {
            ++open;
            ans.push_back('(');
        }
        if (s[i] == ')' && close < closed_must) {
            ++close;
            ans.push_back(')');
        }
    }
    cout << ans << endl;
}
signed main() {
    // OJ;
    solve();
    return 0;
}