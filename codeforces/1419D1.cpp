/*
author-sesky_crocdile
once a crocodile
always a CROCODILE
*/
#include <bits/stdc++.h>
#define ll long long int
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
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    cout << (n - 1) / 2 << endl;
    vector<int> ans(n);
    int j = 0;
    for (int i = 1; i < n; i += 2) {
        ans[i] = a[j++];
    }
    for (int i = 0; i < n; i += 2) {
        ans[i] = a[j++];
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main() {
    solve();
    return 0;
}