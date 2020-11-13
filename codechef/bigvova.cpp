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
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a + 1, a + 1 + n);
        reverse(a + 1, a + 1 + n);
        set<int> vis;
        vector<int> ans;
        ans.push_back(a[1]);
        vis.insert(1);
        int tillnowgcd = a[1];
        int currgcd = 1;
        int pos = 1, i = 1;
        while (i <= n)
        {
            currgcd = 1;
            pos = 1;
            for (int j = 1; j <= n; j++)
            {
                if (__gcd(a[j], tillnowgcd) > currgcd && !vis.count(j))
                {
                    currgcd = __gcd(a[j], tillnowgcd);
                    pos = j;
                }
            }
            if (currgcd != 1)
            {
                i = pos;
                ans.push_back(a[pos]);
                vis.insert(pos);
            }
            else
            {
                for (int j = 1; j <= n; j++)
                {
                    if (!vis.count(j))
                    {
                        ans.push_back(a[j]);
                        vis.insert(j);
                    }
                }
                i = n + 1;
            }
            tillnowgcd = __gcd(currgcd, tillnowgcd);
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}