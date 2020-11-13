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
        int a, b, c;
        cin >> a >> b >> c;
        int res[3];
        res[0] = a;
        res[1] = b;
        res[2] = c;
        sort(res, res + 3, greater<int>());
        int ans = 0;
        if (res[0] > 0) {
            res[0]--;
            ans++;
        }
        if (res[1] > 0) {
            res[1]--;
            ans++;
        }
        if (res[2] > 0) {
            res[2]--;
            ans++;
        }
        if (res[0] > 0 && res[1] > 0) {
            res[0]--;
            res[1]--;
            ans++;
        }
        if (res[0] > 0 && res[2] > 0) {
            res[0]--;
            res[2]--;
            ans++;
        }
        if (res[1] > 0 && res[2] > 0) {
            res[1]--;
            res[2]--;
            ans++;
        }
        if (res[1] > 0 && res[1] > 0 && res[2] > 0)
            ans++;
        cout << ans << endl;
    }
    return 0;
}