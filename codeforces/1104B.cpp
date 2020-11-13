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
    string s;
    cin >> s;
    deque<char> q;
    int ans = 0, n = s.length();
    for (int i = 0; i < n; i++) {
        if (q.empty() || s[i] != q.back()) {
            q.push_back(s[i]);
        }
        else {
            q.pop_back();
            ans++;
        }
    }
    cout << (ans % 2 == 0 ? "No" : "Yes") << endl;
}
signed main() {
    solve();
    return 0;
}