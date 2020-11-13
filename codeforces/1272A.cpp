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
int calc(int a, int b, int c) {
    return abs(a - b) + abs(a - c) + abs(b - c);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int x, y, z;
        int ans = calc(a, b, c);
        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                for (int k = -1; k <= 1; k++) {
                    x = a + i;
                    y = b + j;
                    z = c + k;
                    ans = min(ans, calc(x, y, z));
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}