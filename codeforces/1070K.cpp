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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % k) {
        cout << "No" << endl;
        return;
    }
    int req = sum / k;
    int cur = 0, res = 0;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        cur += a[i];
        res++;
        if (cur == req) {
            ans.push_back(res);
            res = 0;
            cur = 0;
        }
        else if (cur > req) {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}
signed main() {
    solve();
    return 0;
}