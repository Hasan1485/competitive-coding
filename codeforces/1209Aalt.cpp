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
int fac(int n, set<int> s) {
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0 && s.find(i) != s.end()) {
            return i;
        }
    }
    return n;
}
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> ss;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        ss.insert(a[i]);
    }
    set<int> s;
    for (int i = 0; i < n; ++i) {
        s.insert(fac(a[i] , ss));
    }
    cout << s.size() << endl;
}
signed main() {
    solve();
    return 0;
}