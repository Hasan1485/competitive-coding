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
    int n;
    cin >> n;
    int a, b, c;
    cin >> a >> b >> c;
    string s;
    cin >> s;
    int A = 0, B = 0, C = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'R') {
            A++;
        }
        else if (s[i] == 'P') {
            B++;
        }
        else if (s[i] == 'S') {
            C++;
        }
    }
    int wins = min(A, b) + min(B, c) + min(C, a);
    if (2 * wins < n) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << '\n';
    string ans;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'R' && b) {
            ans += 'P';
            b--;
        }
        else if (s[i] == 'P' && c) {
            ans += 'S';
            c--;
        }
        else if (s[i] == 'S' && a) {
            ans += 'R';
            a--;
        }
        else {
            ans += '_';
        }
    }
    for (int i = 0; i < n; i++) {
        if (ans[i] != '_') {
            continue;
        }
        if (a) {
            ans[i] = 'R';
            a--;
        }
        else if (b) {
            ans[i] = 'P';
            b--;
        }
        else if (c) {
            ans[i] = 'S';
            c--;
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