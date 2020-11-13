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
        for (int i = 2; i <= n; i++) {
            if (n % i == 0) {
                n += i;
                break;
            }
        }
        cout << n + ((k - 1) * 2) << endl;
    }
    return 0;
}