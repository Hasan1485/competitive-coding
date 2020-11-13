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
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        int pens, pencils;
        if (a % c == 0)
            pens = a / c;
        else
            pens = (a / c) + 1;
        if (b % d == 0)
            pencils = b / d;
        else
            pencils = (b / d) + 1;
        if (pens + pencils > k)
            cout << -1 << endl;
        else
            cout << pens << " " << pencils << endl;
    }
    return 0;
}