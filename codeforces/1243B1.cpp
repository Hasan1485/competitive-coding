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
    string s, h;
    cin >> s >> h;
    int c = 0;
    string ans,ans1;
    for (int i =0; i < s.length(); i++) {
        if (s[i] != h[i] && c == 0) {
            c++;
            ans += s[i];
            ans += h[i];
        }
        else if (s[i] != h[i] && c == 1) {
            c++;
            ans1 += s[i];
            ans1 += h[i];
        }
        else if (s[i] != h[i] && c == 2) {
            cout << "No" << endl;
            return;
        }
    }
    if (ans == ans1) {
        cout << "Yes" << endl;
        return;
    }
    cout << "No" << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}