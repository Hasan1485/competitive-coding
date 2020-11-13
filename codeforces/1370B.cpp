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
    int a[n * 2];
    vector<int> even, odd;
    for (int i = 1; i <= 2 * n; i++) {
        cin >> a[i];
        if (a[i] % 2)
            odd.push_back(i);
        else
            even.push_back(i);
    }
    vector<pair<int, int>> ans;
    for (int i = 0; i + 1 < odd.size(); i += 2)
        ans.push_back({ odd[i], odd[i + 1] });
    for (int i = 0; i + 1 < even.size(); i += 2)
        ans.push_back({ even[i], even[i + 1] });
    for (int i = 0; i < n - 1; i++)
        cout << ans[i].first << " " << ans[i].second << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}