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
    int arr[n];
    int temp = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> pos;
    int ans;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            pos.push_back(i);
    }
    if (pos.size() == 0)
        ans = n;
    else
    {
        ans = pos[0];
        for (int i = 0; i < pos.size() - 1; i++)
        {
            if (pos[i + 1] - pos[i] - 1 > ans)
                ans = pos[i + 1] - pos[i] - 1;
        }
        if (n - pos[pos.size() - 1] - 1 > ans)
            ans = n - pos[pos.size() - 1] - 1;
    }
    cout << ans << endl;
    return 0;
}