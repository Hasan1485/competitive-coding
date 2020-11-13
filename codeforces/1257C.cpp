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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int vis[n + 1];
    memset(vis, -1, sizeof(vis));
    vis[a[0]] = 0;
    int ans = 10e9 + 5, flag = 0; 
    int start, end;
    for (int i = 1; i < n; i++) {
        int t = a[i];
        if (vis[t] != -1) {
            int distance = i - vis[t] + 1;
            if (distance < ans) {
                ans = distance;
            }
            flag = 1;
        }
        vis[t] = i;
    }
    cout << (flag ? ans : -1) << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}