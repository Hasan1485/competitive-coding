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
    int i = n - 1;
    while (i > 0) {
        if (a[i] != a[0]) {
            break;
        }
        i--;
    }
    int f = i;
    i = 0; 
    while (i < n - 1) {
        if (a[i] != a[n - 1]) {
            break;
        }
        i++;
    }
    int s = n - i - 1;
    cout << max(f, s) << endl;
}
signed main() {
    solve();
    return 0;
}