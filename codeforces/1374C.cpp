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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    vector<char> v(n);
    for (int i = 0; i < n; i++)
        v[i] = s[i];
    bool vis[n];
    for (int i = 0; i < n; i++)
        vis[i] = true;
    bool ok = 0;
    for (int i = 0; i < n; i++) {
        ok = 0;
        if (v[i] == ')') {
            for (int j = 0; j < i; j++) {
                if (v[j] == '(' && vis[j] == true) {
                    ok = true;
                    vis[j] = false;
                    break;
                }
            }
            if (!ok)
                ans++;
        }
    }
    cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}