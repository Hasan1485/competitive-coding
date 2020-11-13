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
    string s;
    cin >> s;
    int cur = 1, el = s[0];
    vector<int> ans(123, 0);
    for (int i = 1; i < n; i++) {
        if (s[i] == el) {
            cur++;
        }
        else {
            ans[el] += cur / k;
            el = s[i];
            cur = 1;
        }
    }
    ans[el] += cur / k;
    cout << *max_element(ans.begin(), ans.end());
}
signed main() {
    solve();
    return 0;
}