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
    vector<int>have(n);
    for (int i = 0; i < n; i++) {
        cin >> have[i];
    }
    sort(have.begin(), have.end(), greater<int>());
    cout << have[0] << " ";
    int ans = 1;
    set<int> done;
    for (int i = 0; i < have.size(); i++) {
        if (have[0] % have[i] == 0 && done.find(have[i]) == done.end()) {
            done.insert(have[i]);
            continue;
        }
        ans = max(ans, have[i]);
    }
    cout << ans << endl;
}
signed main() {
    solve();
    return 0;
}