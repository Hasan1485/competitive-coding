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
        ll n, k;
        cin >> n >> k;
        ll a[n];
        ll b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        ll ans=0;
        for (int i = 0; i < n; i++)
        {
            // no = k / a[i];
            // prof = no * b[i];
            ans = max(ans, ((k / a[i]) * b[i]));
        }
        cout << ans << endl;
    }
    return 0;
}