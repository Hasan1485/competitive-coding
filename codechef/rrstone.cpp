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
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll mx = 0;
    if (k > 0)
    {
        if (k % 2 == 0)
        {
            int temp = 2;
            while (temp--)
            {
                mx = *max_element(a, a + n);
                for (ll j = 0; j < n; j++)
                    a[j] = mx - a[j];
            }
        }
        else
        {
            mx = *max_element(a, a + n);
            for (ll i = 0; i < n; i++)
                a[i] = mx - a[i];
        }
    }
    for (int i=0;i<n;i++)
        cout << a[i] << " ";
    return 0;
}