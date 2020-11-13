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
    int n, m;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    set<int> s(a.begin(), a.end());
    set<int> ss(b.begin(), b.end());
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (s.find(a[i] + b[j]) == s.end() && ss.find(a[i] + b[j]) == ss.end()) {
                cout << a[i] << " " << b[j] << endl;
                return;
            }
        }
    }
}
signed main() {
    solve();
    return 0;
}