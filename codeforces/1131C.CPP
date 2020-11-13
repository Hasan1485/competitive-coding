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
    int a[n];
    vector<int> even;
    vector<int> odd;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        i % 2 ? odd.push_back(a[i]) : even.push_back(a[i]);
    }
    sort(even.begin(), even.end());
    sort(odd.rbegin(), odd.rend());
    for (int i : even) {
        cout << i << " ";
    }
    for (int i : odd) {
        cout << i << " ";
    }
    cout << endl;
}
signed main() {
    solve();
    return 0;
}