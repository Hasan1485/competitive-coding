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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, l;
        cin >> n >> k >> l;
        if (k * l < n)
        {
            cout << -1 << endl;
            continue;
        }
        if (n == 1 && k == 1)
        {
            cout << 1 << endl;
            continue;
        }
        if (n != 1 && k == 1)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            int ans = 1;
            for (int i = 0; i < n; i++)
            {
                if (ans == k + 1)
                    ans = 1;
                cout << ans << " ";
                ans += 1;
            }
            cout << endl;
        }
    }
    return 0;
}