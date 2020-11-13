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
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int ans = 0;
    if (f > e) {
        ans += (min(min(b, c), d)) * f;
        d -= min(min(b, c), d);
        ans += min(a, d) * e;
        cout << ans << endl;
    }
    else {
        ans += min(a, d) * e;
        d -= min(a, d);
        ans += (min(min(b, c), d)) * f;
        cout << ans << endl;
    }
    return 0;
}