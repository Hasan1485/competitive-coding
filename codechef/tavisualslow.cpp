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
        vector<int> v(n, 0);
        v[c - 1] = 1;
        for (int i = 0; i < q; i++)
        {
            int l, r, x, y;
            cin >> l >> r;
            x = l - 1;
            y = r - 1;
            for (int j = x; j < y; j++)
            {
                swap(v[x], v[y]);
                x++;
                y--;
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 1)
            {
                ans = i;
                break;
            }
        }
        cout << ans + 1 << endl;
    }
    return 0;
}