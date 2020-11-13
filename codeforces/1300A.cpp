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
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                ans += 1;
                a[i] = 1;
            }
        }
        for (int i = 0; i < n; i++)
            sum += a[i];
        if (sum != 0)
            cout << ans << endl;
        else
            cout << ans + 1 << endl;
    }
    return 0;
}