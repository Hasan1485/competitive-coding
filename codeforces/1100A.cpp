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
    int sum = 0;
    int ans[k] = {0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        ans[i % k] += a[i];
    }
    int an = 0;
    for (int i = 0; i < k; i++) {
        an = max(an, abs(sum - ans[i]));
    }
    cout << an << endl;
}
signed main() {
    solve();
    return 0;
}