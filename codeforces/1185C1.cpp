/*
author-sesky_crocodile
once a crocodile
always a CROCODILE
*/
#include <cstdio>
#include<bits/stdc++.h>
#define int long long int
#define OJ freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i];
        if (sum <= m) cout << 0 << " ";
        else {
            int toDelete = 0, curSum = sum;
            vector<int> b;
            for (int j = 0; j < i; ++j) {
                b.push_back(a[j]);
            }
            sort(b.begin(), b.end());
            int j = i - 1;
            while (curSum > m) {
                curSum -= b[j--];
                toDelete++;
            }
            cout << toDelete << " ";
        }
    }
}
signed main() {
    // OJ;
    solve();
    return 0;
}