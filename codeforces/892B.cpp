/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define OJ freopen("input.txt", "r", stdin);

inline void solve() {
    int n;
    cin >> n;
    stack<int> s;
    for (int i = 0; i < n; ++i) {
        int l;
        cin >> l;
        while (!s.empty() && s.top() >= i - l) {
            s.pop();
        }
        s.push(i);
    }
    cout << s.size() << endl;
}
signed main() {
    // OJ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}