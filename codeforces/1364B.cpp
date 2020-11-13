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
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<int> ans;
    ans.push_back(a[0]);
    for (int i = 1; i < n - 1; ++i) {
        if (a[i] > a[i + 1] && a[i] > a[i - 1]) {
            ans.push_back(a[i]);
        }
        else if (a[i] < a[i + 1] && a[i] < a[i - 1]) {
            ans.push_back(a[i]);
        }
    }
    ans.push_back(a[n - 1]);
    cout << ans.size() << endl;
    for (int i : ans) {
        cout << i << " ";
    }
    cout << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}