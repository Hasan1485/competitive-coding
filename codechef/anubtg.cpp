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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (n < 4)
        {
            int ans = 0;
            for (int i = 0; i < n; i++)
                ans += a[i];
            cout << ans << endl;
        }
        else if (n == 4)
        {
            sort(a, a + n, greater<int>());
            cout << a[0] + a[1] << endl;
        }
        else
        {
            sort(a, a + n, greater<int>());
            int ans = 0, pos = 0, sum = 0;
            for (int i = 0; i < n; i++)
            {
                pos += 1;
                if (pos <= 2)
                    ans += a[i];
                if (pos == 4)
                    pos = 0;
            }
            cout << ans << endl;
        }
    }
    return 0;
}