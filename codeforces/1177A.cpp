/*
author-sesky_crocodile
once a crocodile
always a CROCODILE
*/
#include <cstdio>
#include<bits/stdc++.h>
#define int long long int
#define OJ freopen("input.txt", "r", stdin);
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
void solve() {
    int k;
    cin >> k;
    string s;
    int c = 1;
    for (int i = 1;; i++) {
        if (c < 10) s += char(48 + c);
        else {
            ostringstream s1;
            s1 << c;
            string add = s1.str();
            s += add;
        }
        ++c;
        if (s.length() >= k) {
            cout << s[k - 1] << " ";
            break;
        }
    }
}
signed main() {
    // OJ;
    solve();
    return 0;
}