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
    return 0;
}
int static r = start_up();
void solve() {
    string s;
    cin >> s;
    int n = s.length();
    vector<char> a(n + 2);
    a[0] = 'R';
    a[n + 1] = 'R';
    int c = 1;
    for (int i = 0; i < n; i++) {
        a[c++] = s[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 'R') {
            int cur = 0;
            for (int j = i + 1; j <= n + 1; j++) {
                if (a[j] == 'R') {
                    cur = j - i;
                    break;
                }
            }
            ans = max(ans, cur);
        }
    }
    cout << ans << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}