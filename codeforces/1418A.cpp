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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;
        ll needs = (y * k) + k - 1;
        ll ans = (needs + (x - 2)) / (x - 1) + k;
        cout << ans << endl;
    }
    return 0;
}