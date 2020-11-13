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
        string s;
        cin >> s;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = s[i] - 48;
        }
        vector<int> b(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (i == 0 && a[i] == 1)
                b[0] = b[1] = 1;
            else if (i == n - 1 && a[i] == 1)
                b[n - 1] = b[n - 2] = 1;
            else if (a[i] == 1 && i != 0 && i != n - 1)
                b[i] = b[i + 1] = b[i - 1] = 1;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == 0)
                ans+=1;
        }
        cout << ans << endl;
    }
    return 0;
}