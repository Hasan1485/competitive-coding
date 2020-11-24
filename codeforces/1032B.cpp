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
    string s;
    cin >> s;
    int n = s.length();
    bool ok = n % 20 == 0;
    int row = (n / 20) + (ok ? 0 : 1);
    int column = n / row;
    if (n % row) column++;
    cout << row << " " << column << endl;
    int c = 0;
    int asterisk = (row * column) - n;
    bool this_time = false;
    for (int i = 0; i < n; ++i) {
        ++c;
        if (asterisk > 0 && !this_time) {
            asterisk--;
            cout << "*";
            this_time = true;
            --i;
            continue;
        }
        cout << s[i];
        if (c == column) {
            this_time = false;
            c = 0;
            cout << endl;
        }
    }
}
signed main() {
    // OJ;
    solve();
    return 0;
}