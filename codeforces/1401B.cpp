/*
author-sesky_crocdile
once a crocodile
always a CROCODILE
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int start_up()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
void solve()
{
    int a0, a1, a2;
    cin >> a0 >> a1 >> a2;
    int b0, b1, b2;
    cin >> b0 >> b1 >> b2;
    int ans = 0;
    int c = min(a2, b1);
    a2 -= c;
    b1 -= c;
    ans += c * 2;

    int n = min(a0, b2);
    a0 -= n;
    b2 -= n;

    int m = min(a1, b0);
    a1 -= m;
    b0 -= m;

    int d = min(a2, b2);
    a2 -= d;
    b2 -= d;

    int loss = min(a1, b2) * 2;
    cout << ans - loss << endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}