/*
author-sesky_crocodile
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
        int power = 1000000000;
        int ans = 0;
        while (n > 0) {
            while (n < power)
                power /= 10;
            ans += power;
            n -= power - (power / 10);
        }
        cout << ans << endl;
    }
    return 0;
}