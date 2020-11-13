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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        int ans = 0, ans1 = 0;
        for (int i = 0; i <= 100; i++)
        {
            if (mp[i] > 0)
                mp[i]--;
            if (mp[i] <= 0)
            {
                ans = i;
                break;
            }
        }
        for (int i = 0; i <= 100; i++)
        {
            if (mp[i] <= 0)
            {
                ans1 = i;
                break;
            }
        }
        cout << ans + ans1 << endl;
    }
    return 0;
}