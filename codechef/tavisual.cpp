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
        int n, c, q;
        cin >> n >> c >> q;
        int v[n];
        for (int i = 0; i < n; i++)
        {
            v[i] = 0;
        }
        v[c - 1] = 1;
        int pos = c - 1;
        for (int i = 0; i < q; i++)
        {
            int l, r;
            cin >> l >> r;
            if((pos+1)>=l && (pos+1)<=r)
                pos = r - 1 - (pos - l + 1);
        }
        cout << pos + 1 << endl;
        // int ans = 0;
        // for (int i = 1; i <= n; i++)
        // {
        //     if (v[i] == 1)
        //     {
        //         ans = i;
        //         break;
        //     }
        // }
        // cout << ans << endl;
    }
    return 0;
}