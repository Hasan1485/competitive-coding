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
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        v[i] = i + 1;
    unordered_set<int> v2;
    int res = n + 1;
    for (int i = 0; i < n; i++)
        v2.insert(res++);
    while (m--)
    {
        int q;
        cin >> q;
        int temp, ans = 0;
        for (int i = 0; i < n; i++)
        {
            temp = q - v[i];
            if (v2.find(temp) != v2.end())
                ans += 1;
        }
        cout << ans << endl;
    }
    return 0;
}