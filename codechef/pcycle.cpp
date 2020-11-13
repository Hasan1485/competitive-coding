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
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    bool v[n + 1] = {0};
    int flag1 = 0, f = 0, res = 0;
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        flag1 = 0;
        f = 0;
        if (v[i] == 0)
        {
            ans.push_back(-1);
            v[i] = 1;
            while (flag1 == 0)
            {
                if (f == 0)
                {
                    f = 1;
                    res = i;
                }
                ans.push_back(i);
                i = a[i];
                v[i] = 1;
                if (i == res)
                {
                    ans.push_back(res);
                    flag1 = 1;
                }
            }
        }
    }
    int c = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] == -1)
            c++;
    }
    cout << c << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] == -1 && i != 0)
            cout << endl;
        else if (i != 0)
            cout << ans[i] << " ";
    }
}