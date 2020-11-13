/*
* author-sesky_crocodile
* once a crocodile
* always a CROCODILE
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
    cin >> n >> m;
    int a[n + m];
    int b[n + m];
    vector<int> v;
    for (int i = 0; i < n + m; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n + m; i++) {
        cin >> b[i];
        if (b[i]) {
            v.push_back(a[i]);
        }
    }
    int pos = 0, j = 0;
    vector<int> ans(m, 0);
    for (int i = 0; i < n + m; i++) {
        if (b[i] == 0) {
            while (abs(v[j] - a[i]) > abs(v[j + 1] - a[i])) {
                j++;
            }
            ans[j]++;
        }
    }
    for (int i : ans) {
        cout << i << " ";
    }
}
signed main() {
    solve();
    return 0;
}