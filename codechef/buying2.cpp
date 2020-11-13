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
        int n, x, total = 0;
        cin >> n >> x;
        vector<int> a(n);
        int minn = 10000000;
        for (int i = 0; i < n; i++)
        {
            cin >> a.at(i);
            total += a.at(i);
            minn = min(minn, a.at(i));
        }
        int num = total / x;
        int numm = (total - minn) / x;
        if (num == numm)
            cout << -1 << endl;
        else
            cout << num << endl;
    }
    return 0;
}