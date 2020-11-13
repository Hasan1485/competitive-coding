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
    ll n, m;
    cin >> n >> m;
    while (m--)
    {
        ll q;
        cin >> q;
        ll temp = ((2 * n) + 1);
        ll ans = abs(temp - q);
        if (n - ans < 0)
            cout << 0 << endl;
        else
            cout << n - ans << endl;
    }
    return 0;
}