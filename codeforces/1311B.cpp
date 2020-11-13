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
bool sortedAfterSwap(int A[], bool B[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        if (B[i]) {
            j = i;
            while (B[j])
                j++;
            sort(A + i, A + 1 + j);
            i = j;
        }
    }
    for (i = 0; i < n - 1; i++) {
        if (A[i + 1] < A[i])
            return false;
    }
    return true;
}
void solve() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int p[m];
    for (int i = 0; i < m; i++) {
        cin >> p[i];
    }
    bool good[n - 1] = { 0 };
    for (int i = 0; i < m; i++) {
        good[p[i] - 1] = 1;
    }
    cout << (sortedAfterSwap(a, good, n) ? "YES" : "NO") << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}