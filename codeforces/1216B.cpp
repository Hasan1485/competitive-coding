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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<deque<int>> v(10000);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        v.at(a[i]).push_back(i + 1);
    }
    sort(a.rbegin(), a.rend());
    int ans = 0, x = 0;
    for (int i = 0; i < n; ++i) {
        ans += (a[i] * x) + 1;
        ++x;
    }
    cout << ans << endl;
    for (int i = 0; i < n; ++i) {
        cout << v[a[i]][0] << " ";
        v[a[i]].pop_front();
    }
}
signed main() {
    solve();
    return 0;
}