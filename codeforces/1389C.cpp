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
    int n = s.length();
    int ans = 0;
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            int cur = 0;
            for (int k = 0; k < n; k++) {
                if (cur & 1) {
                    if (s[k] - '0' == j) {
                        cur++;
                    }
                }
                else {
                    if (s[k] - '0' == i) {
                        cur++;
                    }
                }
            }
            if (i != j) {
                if (cur & 1) {
                    cur--;
                }
            }
            ans = max(ans, cur);
        }
    }
    cout << n - ans << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}