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
    int n;
    cin >> n;
    int dif = n;
    int j;
    if (n == 1) {
        cout << 4 << endl;
        return 0;
    }
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            j = n / i;
            dif = min(dif, abs(i - j));
        }
    }
    // cout << dif << endl;
    int x = 0, y = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0 && abs(i - (n / i)) == dif)
            x = i, y = n / i;
    }
    // cout << x << " " << y << endl;
    cout << 2 * (x + y) << endl;
    return 0;
}