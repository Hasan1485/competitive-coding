/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#define ll long long int
#define OJ freopen("input.txt", "r", stdin);
const long long INF = 1e16;

#include<bits/stdc++.h>
using namespace std;

string s;
int n;
inline void solve() {
    cin >> s;
    n = s.length();
    int u = 0, l = 0, d = 0;
    for (int i = 0; i < n; ++i) {
        if (isupper(s[i])) u++;
        if (islower(s[i])) l++;
        if (isdigit(s[i])) d++;
    }
    if (u && l && d) {
        cout << s << endl;
        return;
    }
    else {
        if (u && l) {
            bool once = 0;
            for (int i = 0; i < n; ++i) {
                if (!once && u > 1 && isupper(s[i])) {
                    cout << "2";
                    once = true;
                }
                else if (!once && l > 1 && islower(s[i])) {
                    cout << "2";
                    once = true;
                }
                else cout << s[i];
            }
        }
        else if (u && d) {
            bool once = 0;
            for (int i = 0; i < n; ++i) {
                if (!once && u > 1 && isupper(s[i])) {
                    cout << "a";
                    once = true;
                }
                else if (!once && d > 1 && isdigit(s[i])) {
                    cout << "a";
                    once = true;
                }
                else cout << s[i];
            }

        }
        else if (l && d) {
            bool once = 0;
            for (int i = 0; i < n; ++i) {
                if (!once && l > 1 && islower(s[i])) {
                    cout << "A";
                    once = true;
                }
                else if (!once && d > 1 && isdigit(s[i])) {
                    cout << "A";
                    once = true;
                }
                else cout << s[i];
            }
        }
        else {
            if (u) {
                int c = 0;
                for (int i = 0; i < n; ++i) {
                    if (c < 2) {
                        cout << (c == 1 ? "a" : "2");
                        ++c;
                    }
                    else cout << s[i];
                }
            }
            else if (d) {
                int c = 0;
                for (int i = 0; i < n; ++i) {
                    if (c < 2) {
                        cout << (c == 0 ? "a" : "A");
                        ++c;
                    }
                    else cout << s[i];
                }
            }
            else if (l) {
                int c = 0;
                for (int i = 0; i < n; ++i) {
                    if (c < 2) {
                        cout << (c == 0 ? "A" : "2");
                        ++c;
                    }
                    else cout << s[i];
                }
            }
        }
    }
    cout << endl;
}
signed main() {
    // OJ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}