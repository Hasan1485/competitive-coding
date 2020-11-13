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
int binarySearch(vector<int>arr, int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x) {
            return m;
        }
        if (arr[m] < x) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    return -1;
}
void solve() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int>ans;
    bool once = 0;
    for (int i = 0; i < n; i++) {
        sort(ans.begin(), ans.end());
        if (binarySearch(ans, 0, ans.size() - 1, a[i]) != -1) {
            once = true;
        }
        
    }
}
signed main() {
    solve();
    return 0;
}