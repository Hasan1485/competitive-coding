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
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n);
        vector<int> b(n);
        b[n - 1] = 1e9;
        if (n == 2)
            cout << x << " " << y << endl;
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    a[i] = x;
                    a[j] = y;
                    int diff = y - x;
                    int dist = j - i;
                    if (diff % dist == 0)
                    {
                        diff = diff / dist;
                        for (int k = i - 1; k >= 0; k--)
                            a[k] = a[k + 1] - diff;
                        for (int k = i + 1; k < n; k++)
                            a[k] = a[k - 1] + diff;
                        if (a[0] > 0 && a[n - 1] < b[n - 1])
                            b = a;
                    }
                }
            }
            for (auto i : b)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}
