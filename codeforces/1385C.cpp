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
int isGood(vector<int> v, int n) {
    int peak = n - 1;
    for (int i = n - 2; i >= 0; i--) {
        if (v[i] >= v[i + 1])
            peak = i;
        else
            break;
    }
    for (int i = peak - 1; i >= 0; i--) {
        if (v[i] <= v[i + 1])
            peak = i;
        else
            break;
    }
    return peak;
}
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << isGood(a, n) << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}