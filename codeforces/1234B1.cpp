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
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int>ans;
    vector<int>::iterator it;
    bool once = 0;
    int c = 0;
    for (int i = 0; i < n; i++) {
        once = false;
        it = find(ans.begin(), ans.end(), a[i]);
        if (it != ans.end()) {
            once = true;
        }
        else {
            ans.push_back(a[i]);
        }
        if (ans.size() > k && !once) {
            ans.erase(ans.begin() + c);
        }
    }
    cout << ans.size() << endl;
    for (int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i] << " ";
    }
    cout << endl;
}
signed main() {
    solve();
    return 0;
}