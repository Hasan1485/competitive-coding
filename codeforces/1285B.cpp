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
int subarrayPossible(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum <= 0) return 1;
    }
    sum = 0;
    for (int i = n - 1; i >= 0; i--) {
        sum += arr[i];
        if (sum <= 0) return 1;
    }
    return 0;
}
void solve() {
    int n;
    cin >> n;
    int a[n];
    int s = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cout << (subarrayPossible(a, n) == 1 ? "NO" : "YES") << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}