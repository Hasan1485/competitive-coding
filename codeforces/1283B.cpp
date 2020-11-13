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
        int n, k;
        cin >> n >> k;
        if (n == 1) {
            cout << 1 << endl;
            continue;
        }
        int give = n - (n % k);
        int left = n - give;
        if (left != 0)
            cout << give + min(n % k, k / 2) << endl;
        else
            cout << give << endl;
    }
    return 0;
}