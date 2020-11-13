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
    int n;
    cin >> n;
    int q[n];
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }
    vector<int> ans;
    bool done[n + 1] = { 0 };
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            done[q[0]] = true;
            ans.push_back(q[0]);
        }
        else if (q[i] != q[i - 1]) {
            done[q[i]] = true;
            ans.push_back(q[i]);
        }
        else {
            ans.push_back(-1);
        }
    }
    int pos = 1;
    for (int i = 0; i < ans.size(); i++) {
        if (ans[i] == -1) {
            while (done[pos]) {
                pos++;
            }
            ans[i] = pos;
            pos++;
        }
    }
    int crmx = ans[0];
    for (int i = 0; i < n; i++) {
        if (q[i] != crmx) {
            cout << -1 << endl;
            return;
        }
        crmx = max(crmx, ans[i + 1]);
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
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