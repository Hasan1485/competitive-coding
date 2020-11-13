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
        int n, x, a, b;
        cin >> n >> x >> a >> b;
        if (x == 0)
            cout << abs(a - b) << endl;
        // else if (n == max(a, b))
        //     cout << abs(a - b) << endl;
        else {
            int mn = min(a, b);
            int mx = max(a, b);
            while (mn > 1 && x > 0) {
                mn--;
                x--;
            }
            while (mx < n && x > 0) {
                mx++;
                x--;
            }
            cout << abs(mx - mn) << endl;
        }
    }
    return 0;
}