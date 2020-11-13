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
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (s == "0") {
            cout << -1 << endl;
            continue;
        }
        int dig = s[s.length() - 1] - 48;
        if (dig % 2 == 1) {
            int ans;
            bool ok = false;
            for (int i = 0; i < s.length() - 1; i++) {
                if (s[i] % 2 == 1) {
                    ok = true;
                    ans = s[i] - 48;
                    break;
                }
            }
            if (ok)
                cout << ans << dig << endl;
            else
                cout << -1 << endl;
        }
        else {
            int ans, anss;
            int c = 0;
            for (int i = 0; i < s.length(); i++) {
                if (s[i] % 2 == 1 && c == 0) {
                    ans = s[i] - 48;
                    c++;
                }
                else if (s[i] % 2 == 1 && c == 1) {
                    anss = s[i] - 48;
                    c++;
                }
            }
            if (c == 2)
                cout << ans << anss << endl;
            else
                cout << -1 << endl;
        }
    }
    return 0;
}