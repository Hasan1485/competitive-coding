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
        int a, b, c, r;
        cin >> a >> b >> c >> r;
        int left = c - r;  // 6
        int right = c + r; // 8
        int meetright = max(left, (min(a, b)));
        int meetleft = min(right, (max(a, b)));
        cout << abs(a - b) - max(meetleft - meetright, 0) << endl;
    }
    return 0;
}