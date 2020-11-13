#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
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
        int b[n];
        b[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            b[i] = max(a[i], b[i + 1]);
        }
        for (int i = 0; i < n; i++)
        {
            a[i] = b[i] - a[i];
        }
        int ma = *max_element(a, a + n);
        if (ma == 0)
        {
            cout << "UNFIT" << endl;
        }
        else
        {
            cout << ma << endl;
        }
    }
    return 0;
}
