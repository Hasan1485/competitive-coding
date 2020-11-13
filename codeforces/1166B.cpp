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
    int a;
    cin >> a;
    int n = 0, m = 0;
    bool yes = 0;
    for (int i = 5; i <= a / 2; ++i) {
        if (a % i == 0) {
            n = i;
            m = a / i;
            if (n >= 5 && m >= 5) {
                yes = true;
                break;
            }
        }
    }
    if (!yes) cout << "-1" << endl;
    else {
        string s = "aeiou";
        for (int i= 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << s[j % 5];
            }
            char c = s[0];
            for (int i = 0; i < 4; ++i) {
                s[i] = s[i + 1];
            }
            s[4] = c;
        }
    }
}
signed main() {
    solve();
    return 0;
}