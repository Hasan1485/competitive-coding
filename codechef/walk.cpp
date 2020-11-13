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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll mx = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx, (a[i]+i));
        }
        cout << mx  << endl;
    }
    return 0;
}
