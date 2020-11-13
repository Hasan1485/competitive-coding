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
    string s;
    cin >> s;
    stack<int> ss;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'B') {
            if (ss.empty()) {
                ss.push(s[i]);
            }
            else {
                ss.pop();
            }
        }
        else {
            ss.push(s[i]);
        }
    }
    cout << ss.size() << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}