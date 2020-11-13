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
int prefix(ll a[], ll n, ll targ)
{
    ll ans = 0;
    for (int i = targ; i >= 0; i--)
        ans += a[i];
    return ans;
}
int suffix(ll a[], ll n, ll targ)
{
    ll ans = 0;
    for (int i = targ; i < n; i++)
        ans += a[i];
    return ans;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll ans = INT_MAX, temp = 0, pos = 0;
        ll pre = prefix(a, n, 0);
        ll suf = suffix(a, n, 0);
        temp = pre + suf;
        ans = temp;
        for (ll i = 1; i < n; i++)
        {
            pre = pre + a[i];
            suf = suf - a[i - 1];
            temp = pre + suf;
            if (temp < ans)
            {
                ans = temp;
                pos = i;
            }
        }
        // cout<<endl;
        // cout<<ans<<endl;
        cout << pos + 1 << endl;
    }
    return 0;
}