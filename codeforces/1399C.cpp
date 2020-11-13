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
int count_pairs(int a[], int n, int sum)
{
    int i = 0, j = n - 1;
    int temp = 0;
    int ans = 0;
    while (i < j)
    {
        temp = a[i] + a[j];
        if (temp == sum)
        {
            ans++;
            i++;
            j--;
        }
        else if (temp > sum)
            j--;
        else
            i++;
    }
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    vector<int> ans;
    for (int i = 0; i < 101; i++)
    {
        ans.push_back(count_pairs(a, n, i));
    }
    int res = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        res = max(res,ans[i]);
    }
    cout << res << endl;
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