/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#define ll long long int
#define OJ freopen("input.txt", "r", stdin);
const long long INF = 1e16;

#include<bits/stdc++.h>
using namespace std;

int n;
inline void solve() {
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<int> ans;
    for (int i = 1; i <= n; ++i) {
        bool ok = true;
        for (int j = 0; j < i + n; ++j) {
            if (a[j+1] - a[j] != a[i+j+1] - a[j+i]) {
                ok = false;
            }
        }
        if (ok) ans.push_back(i);
    }
    for (int i : ans) cout << i << " ";
}
signed main() {
    OJ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}