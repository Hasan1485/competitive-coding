/*
author-sesky_crocdile
once a crocodile
always a CROCODILE
*/
#include<bits/stdc++.h>
#define ll long long int
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
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1] && s[i] != '?') {
            cout << -1 << endl;
            return;
        }
    }
    char a[] = { 'a','b','c' };
    string ans = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '?') {
            ans += s[i];
        }
        else {
            char c, h;
            int pos;
            h = s[i - 1];
            for (int j = i; j < s.length(); j++) {
                if (s[j] != '?') {
                    pos = j;
                    c = s[j];
                    break;
                }
            }
            set <char> ss;
            ss.insert(c);
            ss.insert(h);
            char cur;
            for (int k = 0; k < 3; k++) {
                if (ss.find(a[k]) == ss.end()) {
                    cur = a[k];
                }
            }
            int g = 0;
            for (int e = i; e < pos; e++) {
                if (g % 2 == 0) {
                    ans += cur;
                }
                else {
                    ans += h;
                }
                g++;
            }
            i = pos - 1;
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