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
        int a, b;
        cin >> a >> b; // 5 14
        int ans = 0;
        int five = abs((a - b)) / 5;        // 9 / 5 = 1
        ans += five;                        // 1
        int left = abs(a - b) - (five * 5); // 9 - 5 = 4
        int two = left / 2;                 // 2
        ans += two;                         // 3
        int againleft = left - (two * 2);   // 4 - 4 = 0
        int one = againleft / 1;            // 0 / 1 = 0
        ans += one;                         // 3
        cout << ans << endl;
    }
    return 0;
}