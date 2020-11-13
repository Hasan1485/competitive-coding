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
    int a[4 * n];
    for (int i = 0; i < 4 * n; i++) {
        cin >> a[i];
    }
    sort(a, a + 4 * n);
    int i = 0, j = (4 * n) - 1;
    int ar = 0, temp = 0;
    int ans = 0;
    while (i < j) {
        if (a[i] != a[i + 1] || a[j] != a[j - 1]) {
            cout << "NO" << endl;
            return;
        }
        else {
            temp = ar;
            ar = a[i] * a[j];
            if (temp != ar && temp != 0) {
                cout << "NO" << endl;
                return;
            }
            ans++;
            i += 2; 
            j -= 2;  
        }
    }
    cout << "YES" << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}