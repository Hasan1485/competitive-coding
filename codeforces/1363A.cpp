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
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        int f[2];
        int a[n];
        f[0] = f[1] = 0;
        cin >> n >> x;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            f[a[i] % 2]++;
        }
        bool flag = 0;
        for (int i = 1; i <= f[1] && i <= x; i += 2) 
        {
            int have = f[0], need = x - i;
            if (need <= f[0])
                flag = 1;
        }
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}