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
    int r, g, b, w;
    cin >> r >> g >> b >> w;
    int temp[] = {r, g, b, w};
    int odd = 0;
    for (int i = 0; i < 4; i++)
        if (temp[i] % 2 == 1)
            odd++;
    if (odd <= 1)
    {
        cout << "Yes" << endl;
        return;
    }
    else
    {
        if (r > 0 && b > 0 && g > 0)
        {
            r--;
            b--;
            g--;
            w += 3;
            int tempp[] = {r, g, b, w};
            int odd = 0;
            for (int i = 0; i < 4; i++)
                if (tempp[i] % 2 == 1)
                    odd++;
            if (odd <= 1)
            {
                cout << "Yes" << endl;
                return;
            }
            else
            {
                cout << "No" << endl;
                return;
            }
        }
        else 
        {
            cout << "No" << endl;
            return;
        }
    }
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